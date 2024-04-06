#include<iostream>
#include<vector>
using namespace std;
//approach = use modulus , temporary array 
//jab bhi question ke andar aasa behaviour ho na 
//ki koi chiz yaah ja skti hai vaah ja skti hai asa ho skta hai 
//ya phir counting assa chl rhi ho like 0 1 2 0 1 2 to hmesha 
//try krna ki ek baar modulus ka case lg jaay
void rotate(vector<int> &nums,int k ){
    int n = nums.size();
    vector<int> ans(n);
    for(int index = 0; index<n;index++){
        int newIndex = (index+k)%n;
        ans[newIndex] = nums[index];
    }
    nums = ans;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    int k;
    cout<<"Enter that how many times you want rotation : ";
    cin>>k;

    rotate(v,k);
    for(int i = 0; i < v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}