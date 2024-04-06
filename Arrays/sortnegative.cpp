#include<iostream>
#include<vector>
using namespace std;
// by 2 pointer approach
void shiftNegativeOneSide(vector<int> &v,int n){
    int j = 0; 
    //j -> memory block -> jaha pr main negative number store kr skta hu 
    for(int index = 0; index<n ; index++){
        //index -> entire array ko traverse krne ke liye
        if(v[index]<0){
            swap(v[index],v[j]);
            j++;
        }
    }
}

int main(){
    vector<int> v;
    int n;
    cout<<"Enter how many number of elements you want to take: ";
    cin>>n;
    cout<<"Now enter the "<<n<<"elements for your array : "<<endl;
    for(int i = 0; i < n;i++){
        int data;
        cin>>data;
        v.push_back(data);
    } 
    shiftNegativeOneSide(v,n);
    cout<<"Printing the array : "<<endl;
    for(int i = 0; i < n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
     
}