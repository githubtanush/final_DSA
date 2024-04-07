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
int pivotelement(vector<int> &v,int &n){
    int s = 0;
    int e = v.size()-1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(s==e)
            return s;
        if(v[mid]<v[mid-1]){
            return mid-1;
        }
        else if(v[mid]>v[mid-1]){
            return mid;
        }
        if(v[mid]<v[mid-1]){
            return mid-1;
        }
        else if(v[s]>v[mid]){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}
int search(vector<int> &v,int target){
    int pivotIndex = pivotelement()
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
    int target;
    cout<<"Enter the element which u want to found : ";
    cin>>target;
    int m = pivotelement(v,n);
    cout<<"Pivot element in the array is : "<<v[m]<<endl;
    print(v);
    return 0;

}