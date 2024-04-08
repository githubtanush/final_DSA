#include<iostream>
#include<vector>
using namespace std;

// bool isPerfectSquare(int num) {
//     if (num < 1)
//         return false;

//     int s = 1;
//     int e = num;
    
//     while (s <= e) {
//         long long mid = s + (e - s) / 2;
//         long long square = mid * mid;
        
//         if (square == num){
//         cout<<mid;
//             return true;
//         }
//         else if (square < num)
//             s = mid + 1;
//         else
//             e = mid - 1;
//     }
    
//     return false;
// }
 
 int mySqrt(int x) {
        int s = 0;
        int e = x;
        long long int mid = s + (e-s)/2;
        int ans = -1;
        while(s<=e){
            //kya mid hi to answer nhi hai 
            if(mid*mid == x){
                return mid;
            }
            else if (mid*mid < x){
                    //ans store 
                    //right mein jao
                    ans = mid;
                    s = mid + 1;
            }
            else {
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
//Home work = show square root in points
int main(){
    int target ;
    cout<<"Enter which element for which you want find the square root : ";
    cin>>target;
    int mid = mySqrt(target);
    cout<<"The square root for this target is : "<<mid<<endl;
    return 0;

}