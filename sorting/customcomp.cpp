#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//Now we use STL of cpp we use sort function of cpp
//sort(v.begin(),v.end());//for vector// by default inc. order
//sort(arr,arr+n)//for array 
// void print(vector<int> &v){
//     for(int i = 0; i < v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }
void print(vector<vector<int> >&v){
    for(int i = 0; i < v.size();i++){
        vector<int>&temp = v[i];
        int a = temp[0];
        int b = temp[1];
        cout<<a<<" "<<b<<endl;
    }
}
//sort by 1st index of vector
// bool mycomp(int &a,int &b){
//     return a>b;  
// }
//good practice to written & in comparitors
bool mycompfor1stindex(vector<int> &a,vector<int> &b){
    return a[1] < b[1];
}
int main(){
    // vector<int> v;
    // v.push_back(435);
    // v.push_back(43);
    // v.push_back(45);
    // v.push_back(35);
    // v.push_back(485);
    // v.push_back(445);
    // v.push_back(55);
    // v.push_back(3);
    // //In this function this sort function using o(nlogn) time complexity
    // sort(v.begin(),v.end());//for inc. order
    // sort(v.begin(),v.end(),mycomp);//for dec. order


    //vector of vector sorting
    vector<vector<int> > v;
    int n;
    cout<<"Enter size:\n";
    cin>>n;
    for(int i = 0; i < n;i++){
        int a,b;
        cout<<"Enter a,b : "<<endl;
        cin>>a>>b;
        vector<int>temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }
    cout<<"Here are the values"<<endl;
    print(v);
    cout<<"Sorted by 0th index"<<endl;
    //inc. order
    sort(v.begin(),v.end());
    print(v);
    cout<<"Sorted by 1st index"<<endl;
    //dec order
    sort(v.begin(),v.end(),mycompfor1stindex);


    print(v);
    return 0;

}