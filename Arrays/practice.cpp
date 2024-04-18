#include<iostream>
using namespace std;
void inputArray(int arr[],int size){
    for(int i = 0; i < size;i++){
        cin>>arr[i];
    }
}
void outputArray(int arr[],int size){
    for(int i = 0; i < size;i++){
        cout<<arr[i];
    }
}
int main(){
    int arr[100];
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    inputArray(arr,size);
    outputArray(arr,size);
    cout<<endl;
    int j = size - 1;
    for(int i = 0; i < size/2;i++ ){
        swap(arr[i],arr[j]);
        j--;
    }
    outputArray(arr,size);
    return 0;
}