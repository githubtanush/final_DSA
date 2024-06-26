//first occurance in sorted array - try binary search
#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> &v){
    for(int i = 0; i < v.size();i++){
        cout<<v[i]<<" ";
    }
}
int findfirstOccurance(vector<int> v,int target){
    int s = 0;
    int e = v.size()-1;
    int mid = (s+(e-s)/2);
    int ans = -1;
    while(s<=e){
        if(v[mid]==target){
            //ans store 
            ans = mid;//answer store krke right mein jaana that is the base setup of advance question
            //left mein jao
            e = mid - 1;
        }
        else if(target>v[mid]){
            //right mein jao 
            s = mid + 1; 
        }
        else if(target<v[mid]){
            e = mid - 1;
        }
        //BEST Practice
        mid = (s+(e-s)/2);
    }
    return ans;
}
int findlastOccurance(vector<int> v,int target){
    int s = 0;
    int e = v.size()-1;
    int mid = (s+(e-s)/2);
    int ans = -1;
    while(s<=e){
        if(v[mid]==target){
            //ans store 
            ans = mid;
            //right mein jao
            s = mid + 1;
        }
        else if(target>v[mid]){
            //right mein jao 
            s = mid + 1; 
        }
        else if(target<v[mid]){
            e = mid - 1;
        }
        //BEST Practice
        mid = (s+(e-s)/2);
    }
    return ans;
}
int totaloccurance(vector<int> &v,int target){
int firstOcc = findfirstOccurance(v,target);
int lastOcc = findlastOccurance(v,target);
int totalOcc = lastOcc-firstOcc + 1;
return totalOcc;
}

int main(){
    vector<int> v;
    int n ;
    cout<<"Enter the number that how many elements you want to take : ";
    cin>>n;
    int target ;
    cout<<"Enter which element you want to find : ";
    cin>>target;
    for(int  i = 0; i< n;i++){
        int data;
        cin>>data;
        v.push_back(data);
    }
    int m = totaloccurance(v,target);
    cout<<"The first Occurance when the target occur is : "<<m<<endl;
    print(v);
    return 0;

}