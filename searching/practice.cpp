#include<iostream>
using namespace std;
void inputarray(int arr[],int n){
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
}
int binarySearch(int arr[],int n,int target){
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            s = mid + 1;
        }
        else if(arr[mid]>target){
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}
int findfirstOccurance(int arr[],int n,int target){
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s)/2;
    int ans = 0;
    while(s<=e){
        if(arr[mid]==target){
            //ans mein store kro 
            ans = mid ; 
            //go to e = mid - 1;
            e  = mid - 1;
        }
        else if (target>arr[mid]){
            //right mein jao
            s = mid  + 1;
        }
        else{
            //left mein jao
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int findlastOccurance(int arr[],int n,int target){
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s)/2;
    int ans = 0;
    while(s<=e){
        if(arr[mid]==target){
            //ans mein store kro 
            ans = mid ; 
            //go to s = mid + 1;
            s = mid + 1;
        }
        else if (target>arr[mid]){
            //right mein jao
            s = mid  + 1;
        }
        else{
            //left mein jao
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main(){
    int arr[1000];
    int size;
    cout<<"Enter the size of the array you want to made: ";
    cin>>size;
    int target;
    cout<<"Enter the target which u find in the array : ";
    cin>>target;
    inputarray(arr,size);
    int index = binarySearch(arr,size,target);
    if(index == -1){
        cout<<"The target which u found is not present in this array "<<endl;
    }
    else{
    cout<<"The target which u found in this array is present at index : "<<index<<endl;
    }
    int occ = findfirstOccurance(arr,size,target);
    cout<<"The very first occurance for that number is at index : "<<occ<<endl;
    int lastocc = findlastOccurance(arr,size,target);
    cout<<"The very last occurance for that number is at index : "<<lastocc<<endl;

    return 0;
}