#include<iostream>
#include<string>
using namespace std;
int main(){
    // //creation
    // string name;
    // //strings creation  - string name;
    // //i/p - cin>>name;
    // //print - cout<<name;
    // //input
    // //cin>>name;//delimeter space ,tabspace and next line
    // getline(cin,name);//delimeter only next line

    // //print
    // cout<<"Printing name: "<<name<<endl;
    // cout<<"Printing first character : "<<name[0]<<endl;
    // int index = 0;
    // while(name[index] != '\0'){
    //     cout<<"index: "<<index<<"character: "<<name[index]<<endl;
    //     index++;
    // }
    // cout<<"printing index 12 value: "<<name[12]<<endl;
    // int value = (int)name[12];
    // cout<<"Value: "<<value<<endl;






    //Check String inbuilt function
//     string name;
//     getline(cin,name);
//     //empty string
//    // string temp = "";
//     //cout<<"Length of the String : "<<name.length()<<endl;
//     //cout<<"String is empty or not : "<<temp.empty()<<endl;
//     //cout<<"Character at position 0 is : "<<name.at(0)<<endl;
//     cout<<"Front character of string is : "<<name.front()<<endl;
//     cout<<"Last character of string is : "<<name.back()<<endl;
    // string str1 = "Tanush";
    // string str2 = "Arora";
    // cout<<"Before Appending : "<<endl;
    // cout<<str1<<endl;
    // cout<<str2<<endl;

    // //Append
    // str1.append(str2);
    // cout<<"After appending : "<<endl;
    // cout<<str1<<endl;
    // cout<<str2<<endl;

    // string desc = "This is a car";
    // desc.erase(4,3);
    // cout<<desc<<endl;

    // string name = "Tanush Arora";
    // string middle = "kumar ";
    // name.insert(7,middle);
    // cout<<name<<endl;

    // string name = "Tanus";
    // cout<<name<<endl;
    // name.push_back('h');
    // cout<<name<<endl;
    // name.pop_back();
    // cout<<name<<endl;

    //str2 -> find in str1
    //if found  = !npos
    //if not found  = npos
    // string str1 = "yaar tera superstar desi kalakar";
    // string str2 = "stari";
    // if(str1.find(str2) == string::npos){
    //     //not found
    //     cout<<"Not found"<<endl;
    // }
    // else{
    //     cout<<"Found"<<endl;
    // }
    // string str1 = "Tanush";
    // string str2 = "Arora";
    // string str3 = "Tanush";
    // if(str1.compare(str2)==0){
    //     cout<<"Matching"<<endl;
    // }
    // else{
    //     cout<<"Not matching"<<endl;
    // }

    //substr
    string name = "This is a car, big daddy of all SUV's.";
    cout<<name.substr(19,5)<<endl;

    return 0;
}

//string size
//empty
//push_back
//pop_back
//append
//at
//substr
//compare
//find