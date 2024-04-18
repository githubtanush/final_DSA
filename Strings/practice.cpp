#include<iostream>
using namespace std;
int findlen(char ch[1000],int size){
    int index = 0;
    while(ch[index] !='\0'){
        index++;
    }
    return index;
}
void reverse(char ch[1000],int size){
    int i = 0; 
    int j = size - 1;
    while(i<=j){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
}
void converttouppercase(char ch[1000],int size){
    for(int i = 0 ; i < size;i++){
            char curr  = ch[i];
            if(curr >= 'a' && curr<='z'){
           ch[i] = curr-'a'+'A';
            }
    }
}
void Replace(char ch[1000],int size){
    for(int i = 0; i < size;i++){
        if(ch[i]=='@'){
            ch[i] = ' ';
        }
    }
}
bool checkPalindrome(char ch[1000],int size){
    int j = size - 1;
    for(int i = 0; i < size/2;i++){
        if(ch[i]==ch[j]){
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    char ch[1000];
    cin.getline(ch,1000);
    int len = findlen(ch,1000);
    cout<<"The length of the character array "<<ch<<" is : "<<len<<endl;
    // reverse(ch,len);
    converttouppercase(ch,len);
    // Replace(ch,len);
    cout<<"The reverse of the character array "<<ch<<" is : "<<ch<<endl;
    bool flag = checkPalindrome(ch,len);
    if(flag==0){
        cout<<"The given string is not a palindromic string"<<endl;
    }
    else{
        cout<<"The given string is palindromic string"<<endl;
    }
    return 0;
}