#include<iostream>
#include<vector>
using namespace std;
int missingNumber(vector<int> &nums){
    int sum = 0;
    int n = nums.size();
    for(int i = 0; i < n;i++){
        sum = sum + nums[i];
    }
    int totalSum = (n*(n+1))/2;
    int ans = totalSum - sum;
    return ans;
}
int main(){

    //Approach = sum  
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    cout<<"Missing number in this given array is : "<<missingNumber(v)<<endl;
    for(int i = 0; i < v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}