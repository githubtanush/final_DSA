#include<iostream>
using namespace std;
//Replace @ with space
void Replacewithspace(char ch[],int n){
    int index = 0;
    while(ch[index] != '\0'){
        char curr = ch[index];
        if(curr == '@'){
            ch[index]= ' ';
        }
        index++;
    }
}
//Length of String 
int findLength(char ch[],int size){
    // int length = 0;
    // for(int i = 0; i < size;i++){
    //     if(ch[i]=='\0'){
    //         //ruk jao 
    //         break;
    //     }
    //     else{
    //         length++;
    //     }
    // }
    // return length;

    //By while loop 
    int index = 0;
    while(ch[index] != '\0'){
        index++;
    }
    return index;
}
bool checkPalindrome(char ch[],int n){
    //n = length of string 
    int i = 0;
    int j =  n - 1;
    while(i<=j){
        if(ch[i]==ch[j]){
            i++;
            j--;
        }
        else{
            //characters are not matching
            return  false;
        }
    }
    //agar yaha phunch gye ho toh
    //eska matalab saarein characters match kr gye hai 
    //iska matlab palindrome hai 
    //iska matlab return true krdo
    return true;
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    // cout<<"Before :"<<ch<<endl;
    // // Replacewithspace(ch,100);
    // cout<<"After : "<<ch<<endl;
    int len = findLength(ch,100);
    bool isPalindrome = checkPalindrome(ch,len);
    if(isPalindrome){
        cout<<"Valid Palindrome"<<endl;
    }
    else{
        cout<<"Invalid Palindrome"<<endl;
    }
    return 0;
}