//pivot element in array 
//search in a rotated and sorted array
//maximum no. in the array is pivot element
#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &v){
    for(int i = 0; i < v.size();i++){
        cout<<v[i]<<" ";
    }
}
int findPivotIndex(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int e = nums.size()-1;
        int mid = s + (e-s)/2;
        while(s<=e){
        if(s==e){
            return s;
        }
            //bhaiya mid vali condition lgana bhul gay thay toh hma bhi yaad rkhna hoga
        if(mid+1 < n && nums[mid]>nums[mid+1]){
            return mid;
        }
        else if(mid-1 >= 0 && nums[mid]<nums[mid-1]){
            return mid-1;
        }
        else if(nums[s]>nums[mid]){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
    }
    int binarysearch(vector<int> &nums,int s,int e,int target){
        int mid = s+(e-s)/2;
        while(s<=e){
            if(nums[mid]== target){
                return mid;
            }
            else if(target > nums[mid]){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return -1;
    }
    int search(vector<int> &nums,int target){
        int pivotIndex = findPivotIndex(nums);
        int n = nums.size();
        int ans = -1;
        if(target>=nums[0] && target<=nums[pivotIndex]){
            ans = binarysearch(nums,0,pivotIndex,target);
        } 
        else{
            ans = binarysearch(nums,pivotIndex+1,n-1,target);
        }
        return ans;
    }
int main(){
    vector<int> v;
    int n ;
    cout<<"Enter the number that how many elements you want to take : ";
    cin>>n;
    for(int  i = 0; i< n;i++){
        int data;
        cin>>data;
        v.push_back(data);
    }
    int target;
    cout<<"Enter the element which u want to found : ";
    cin>>target;
    int m = search(v,target);
    cout<<"Pivot element in the array is : "<<m<<endl;
    print(v);
    return 0;

}