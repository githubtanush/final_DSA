#include<iostream>
using namespace std;
int incrementBy1(int n){//New n will be allocate
    n = n + 1;
    return n;
}
//same n but nickname will be allocate
int incby1(int &n){
    n = n + 1;
    return n;
}
int main(){
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    int m = incrementBy1(n);
    cout<<n<<endl;
    cout<<incby1(n)<<endl ;
    cout<<m<<endl;
    
    //Refrence variable 
    // int n = 5;
    // int &k = n; //k -> nickname, alias k is the refrence variable
    // int &c = n;
    // //k ki khud ki koi existence nhi hai
    // //vo n ka hi dusra name hai bss
    // //means if you cout<<n - print 5 if cout<<k - print 5
    // cout<<"n: "<<n<<endl;
    // cout<<"k: "<<k<<endl;
    // cout<<"c: "<<c<<endl;
    //but refrence variable cannot be initialized by any constant value 
    //because refrence variable bolta hai mein kisi variable ka name bn skta 
    //but constant ka nhi bn skta
    //int &p = 6;//Error
    return 0;
}