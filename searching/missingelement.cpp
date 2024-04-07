//Interview question
//Find the missing element in sorted array - //sorted array means binary search
//sorted array / search / less than n time complexity
#include<iostream>
#include<vector>
using namespace std;
//jab tak missing element nhi aaya hai tab tak plus 1 vala pattern chlega
//or jab missing element aa jayga tab pattern bdl jayga
void print(vector<int> &v){
    for(int i = 0; i < v.size();i++){
        cout<<v[i]<<" ";
    }
}
int missingelement(vector<int> &v,int &n){
    int s = 0;
    int e = v.size()-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        int diff = v[mid]-mid;
        if(diff == 1){
            //right mein jao 
            s = mid + 1;
        }
        else{
            //ans store
            ans = mid;
            //left mein jao 
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    if(ans+1 == 0){
        return n+1;
    }
    return ans + 1;
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
    int m = missingelement(v,n);
    cout<<"Missing element is : "<<m<<endl;
    print(v);
    return 0;

}