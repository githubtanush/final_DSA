// #include<iostream>
// #include<algorithm>
// using namespace std;
// void selectionsort(int arr[],int n){
//     for(int i = 0 ;  i < n-1;i++){
//         int minIndex = i;
//         for(int j = i+1; j < n;j++){
//             if(arr[j]<arr[minIndex]){
//                 swap(arr[j],arr[minIndex]);
//             }
//         }
//     }
// }
// int main(){
//     int arr[] = {5,4,3,2,1};
//     int n = 5;
//     selectionsort(arr,n);
//     for(int i = 0; i < n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
void selectionsort(vector<int> &v){
    for(int i = 0; i < v.size()-1;i++){
        int minIndex = i;
        for(int j = i+1; j < v.size();j++){
            if(v[j]<v[minIndex]){
                minIndex = j;
            }
        }
                swap(v[i],v[minIndex]);
    }
}
int main(){
    vector<int> v;
    v.push_back(44);
    v.push_back(33);
    v.push_back(55);
    v.push_back(22);
    v.push_back(11);
    selectionsort(v);
    for(int i = 0; i < v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}