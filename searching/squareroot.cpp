#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> &v){
    for(int i = 0; i < v.size();i++){
        cout<<v[i]<<" ";
    }
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
    
    print(v);
    return 0;

}