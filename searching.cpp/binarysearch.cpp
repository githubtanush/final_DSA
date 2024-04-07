//monotonic function = inc. or dec. order array then only binary search will apply when the array is sorted
#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> &v,int target){
    int start  = 0;
    int end = v.size()-1;
    //there is some flaw in below line
    int mid = (start+(end-start)/2);
    while(start<=end){
        //found
        if(v[mid]==target){
            //return index of found element
            return mid;
        }
        else if(target>v[mid]){
            //right mein jao
            start = mid + 1;
        }
        else if(target<v[mid]){
            end = mid  - 1;
        }
        //mid update 
        mid = (start+(end-start)/2);
    }
    return -1;
}

int main(){
    vector<int> p;
    p.push_back(10);
    p.push_back(20);
    p.push_back(30);
    p.push_back(40);
    p.push_back(50);
    p.push_back(60);
    p.push_back(70);
    p.push_back(80);
    p.push_back(90);
    int target = 90;
    int ansIndex = binarySearch(p,target);
    if(ansIndex==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Elment found at Index: "<<ansIndex<<endl;
    }
    return 0;
}

//When we found that case when start == end 
//then it is represent the array has 1 size - single element