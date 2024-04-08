//Binary search on nearly sorted array 

//Most asked in interview


//sorted array = 10,20,30,40,50,60,70;
//nearly sorted array = 20,10,30,50,40,70,60
//Any number in sorted array at ith index then same number on nearly sorted array 
//is occur in (i-1)th index or ith index or (i+1)th index

//Normal sorted array - if(arr[mid]==target) return mid
//In nearly sorted array - 1st case.)if(arr[mid-1]==target) return mid - 1;
//2nd case.) if(arr[mid]==target) return mid;
//3rd case.) if(arr[mid+1]==target) return mid+1;

//Normal sorted array - 1.)if(target> arr[mid]) - right;
//2.) else - left;

//Nearly sorted array - 1.) if(target>arr[mid]) - right; - catch
//Catch in these is s = mid + 2; not mid + 1;
//2.) else - left - catch//same catch e = mid - 2; not mid - 1;
#include<iostream>
#include<vector>
using namespace std;

int binarysearchtonearlysortedarray(vector<int> &nums,int target){
    int n = nums.size();
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(nums[mid]==target){
            return mid;
        }
        //catch mid+1>=0 is necessary condition which every time forgot everyone
        if(mid-1>=0 && nums[mid-1]==target){
            return mid-1;
        }
        if(mid+1<n && nums[mid+1]==target){
            return mid+1;
        }
        if(nums[mid]<target){
            s = mid + 2;
        }
        else if(nums[mid]>target){
            e = mid - 2;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main(){
    vector<int> v;
    int n;
    cout<<"Enter the number that how many you wants to take : ";
    cin>>n;
    for(int i = 0; i < n;i++){
        int data;
        cin>>data;
        v.push_back(data);
    }
    int target;
    cout<<"Enter the target for it : ";
    cin>>target;
    int index = binarysearchtonearlysortedarray(v,target);
    if(index == -1){
        cout<<"Element is not found"<<endl;
    }
    else{
        cout<<"Element is found at index : "<<index<<endl;
    }

    return 0;
}