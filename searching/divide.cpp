//quotient * divisor + remainder = divident
//quotient * divisor <= divident
//question = give two input a and b 2 no. divide krke btao binary search kya bnega
//a/b  = quotient find krke btao using binary search

//quotient * divisor == divident quotient - finalAns
//quotient * divisor < divident
//ans store then right
//quotient * divisor > divident then we move to left

//positive / positive = positive
//negative / negative = positive
//negative / positive = negative
//positive / negative = negative

//Homework - point ke baad ki precision tumhe khud calculate krni hai 

#include<iostream>
int getQuotient(int divisor,int divident){
    int s = 0;
    int e = divident;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(mid * divisor == divident){
            return mid;
        }
        if(mid * divisor < divident){
            //ans store
            ans = mid;
            // right mein jao 
            s = mid + 1;
        }
        else{
            //left
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}
using namespace std;
int main(){
    int divisor;
    cout<<"Enter the divisor you want to give : ";
    cin>>divisor;
    int divident;
    cout<<"Enter the divident you want to give : ";
    cin>>divident;
    int ans = getQuotient(abs(divisor),abs(divident));
    //now we need to decide ki sign kon sa lagaye +ve ya -ve
    if((divisor>0 && divident<0) ||(divisor<0 && divident > 0)){
        ans = 0 - ans;
    }
    //Homework = 0 vala case handle kr lena
    cout<<"Final Ans is : "<<ans<<endl;
    return 0;
}