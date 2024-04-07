#include<iostream>
#include<vector>
using namespace std;
bool LinearSearch(vector<int> &v,int target){
    for(int i = 0; i < v.size();i++){
        if(v[i]==target){
            return true;
        }
    }
    return false;
}
//Linear search
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(34);
    v.push_back(534);
    v.push_back(45);
    v.push_back(425);
    int target;
    cout<<"Enter the target which u want to find : "<<endl;
    cin>>target;
    bool hi = LinearSearch(v,target);
    if(hi==1){
        cout<<"Element is in the array"<<endl;
    }
    else{
        cout<<"Element is not in the array "<<endl;
    }
    return 0;
}