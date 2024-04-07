//peak element in mountain array 
//s<=e infinite loop
//s < e main thing to understand in this question
//i/p = {10,20,50,40,30}
//A.) arr[i]<arr[i+1]
//B.) arr[i]>arr[i+1]
//c.)peak arr[i]>arr[i+1] arr[i]>arr[i-1]
// // arr[i]<arr[i+1] - A
// // Not  - B + Peak
#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &v){
    for(int i = 0; i < v.size();i++){
        cout<<v[i]<<" ";
    }
}
int peakelement(vector<int> &v,int &n){
    int s = 0;
    int e = v.size()-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<e){
        if(v[mid]<v[mid+1]){
            //right mein jao 
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
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
    int m = peakelement(v,n);
    cout<<"Peak element in the array is : "<<m<<endl;
    print(v);
    return 0;

}