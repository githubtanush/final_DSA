//int arr[5];
//char arr[5];
//Character array is memory efficient and very faster than strings 
#include<iostream>
using namespace std;
int main(){
    
    char ch[100];
    //integer array input taken by for loop but in character 
    //in character array you don't need input by for loop 
    //just take it by 
    //input 
    // cin>>ch;//but in these there is a delimeter like 
    //in nextline, space and tab space
    //In last there is null character at the end
    //access ch[index];
    

    //so when we access any character with delimeter use cin.getline();
    cin.getline(ch,100);
    // for(int i = 0; i < 6;i++){
    //     cout<<"At Index: "<<i<<" "<<ch[i]<<endl;
    // }
    //This is prove that in last automatically null character will be add
    // char temp = ch[6];
    // int value = (int) temp;
    // cout<<"printing integer value : "<<value<<endl;

    //print
    cout<<ch;


    return 0;
}