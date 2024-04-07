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
int pivotelement(vector<int>& nums) {
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
    int m = pivotelement(v);
    cout<<"Pivot element in the array is : "<<v[m]<<endl;
    print(v);
    return 0;

}