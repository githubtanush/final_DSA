// #include<iostream>
// #include<algorithm>
// using namespace std;
// void bubblesort(int arr[],int n){
//     for(int i = 1 ;  i < n;i++){
//        int key  = arr[i];
//        int j = i - 1;
//         while(j>=0 && arr[j]>key){
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] =  key;
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
void insertionsort(vector<int> &v){
    //i = 0 chod deta hu 
    for(int i = 1; i < v.size();i++){
        int key = v[i];
        int j = i - 1;
        while(j>=0 && v[j]>key){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;

    }

}
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    insertionsort(v);
    return 0;
}