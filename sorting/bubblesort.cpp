// #include<iostream>
// #include<algorithm>
// using namespace std;
// void bubblesort(int arr[],int n){
//     for(int i = 0 ;  i < n;i++){
//         for(int j = 0; j < n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }
// int main(){
//     int arr[] = {5,4,3,2,1};
//     int n = 5;
//     bubblesort(arr,n);
//     for(int i = 0; i < n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
void bubblesort(vector<int> &v){
    int n = v.size();
    for(int i = 0; i < n-1 ; i++ ){
        for(int j = 0; j < n-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
}
void print(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(5);
    bubblesort(v);
    print(v);
    return 0;
}