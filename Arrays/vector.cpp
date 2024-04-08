// //vector is dynamic array 
// #include<iostream>
// using namespace std;
// //static array - int arr[5];
// void fun(int a[],int n){
//     for(int i = 0; i < n;i++){
//         cout<<a[i]<<" ";
//     }
// }
// //dynamic array  
// int main(){
// int n;
// cin>>n;
// int *arr = new int[n];//each element would be 0 or garbage.
// for(int i = 0; i< n;i++){
//     cin>>arr[i];
// }
// for(int i = 0; i < n;i++){
//     cout<<arr[i]<<" ";
// }
// return 0;
// }

//Vector
//contiguous memory
//Dynamic sizing
//Automatic reallocation
//size and capacity
//array like access


// #include<iostream>
// #include<vector>//for insert vector array 
// using namespace std;
// void printsize(vector<int>v ){
//     int size = v.size();
//     for(int i = 0; i< size;i++){
//         cout<<v[i]<<endl;
//        // cout<<v.at(i)<<endl;
//     }
// }

// // void print2(vector<int> v){
// //     cout<<"Printing vector method 2"<<endl;
// //     for(auto it:v){
// //         cout<<it<<" ";
// //     }
// //     cout<<endl;
// // }
// int main(){
//     //In vector we don't tell the size of the vector
//     //just keep inserting i  will manage allocation
//     //pop always from last
//     // vector<int> v 
//     vector<int> v;
//     // v.push_back(1);
//     // v.push_back(2);
//     // v.push_back(3);
//     // printsize(v);     

//     // while(1){
//     //     int data;
//     //     cin>>data;
//     //     v.push_back(data);
//     //     cout<<"vector capacity : "<<v.capacity()<<" Vector size : "<<v.size()<<endl;
//     // }      
//     // // v.clear();
//     // printsize(v);
//     // v.push_back(1);
//     // printsize(v);

//     // vector<int>arr;
//     // vector<int>arr2(5,-1);
//     // arr2.push_back(50);
//     // Not supported these arr3 and arr4 ways in mac
//     // vector<int>arr3 = {1,2,3,4,5};
//     // // arr3.pop_back();
//     // vector<int>arr4{1,2,3,4,5};
//     // printsize(arr4);
//     // printsize(arr3);
//     // printsize(arr2);
//     //These two ways are also not work
//     // vector<int> arr5 = {1,2,3,4,5};
//     // vector<int>arr6(arr5);
//     // printsize(arr6);

//     // vector<char> v;
//     // v.push_back('a');
//     // v.push_back('b');
//     // v.push_back('c');
//      vector<int> v;
//     v.push_back(32);
//     v.push_back(37);
//     v.push_back(89);
//     cout<<"Front element: "<<v[0]<<endl;
//     cout<<"Front element: "<<v.front()<<endl;
//     cout<<"End element: "<<v[v.size()-1]<<endl;
//     cout<<"End element: "<<v.back()<<endl;
//     print2(v);
//     v.pop_back();
//     print2(v);
//     return 0;
// }