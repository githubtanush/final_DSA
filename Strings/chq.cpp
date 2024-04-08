//Character array and integer array by default pass by refrence
//that's why we not pass it by refrence
#include<iostream>
using namespace std;

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
//Reverse a String 
void reverseString(char ch[],int n){
    int i = 0; 
    int j = n - 1;
    while(i<=j){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
}

void converttoUpperCase(char ch[],int n){
    int index = 0;
    while(ch[index]!='\0'){
        char currCharacter = ch[index];
        //check if lowercase, then convert it to uppercase
        if(currCharacter >= 'a' && currCharacter <= 'z'){
            ch[index] = currCharacter - 'a' + 'A';
        }
        index++;
    }
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    // int len = findLength(ch,100);
    // cout<<"Length of String : "<<len <<endl;
    // cout<<"Printing Length : "<<strlen(ch)<<endl;
    cout<<"Before : "<<ch<<endl;
    // int len = findLength(ch,100);
    converttoUpperCase(ch,100);
    // reverseString(ch,len);

    cout<<"After : "<<ch<<endl;

    return 0;
}