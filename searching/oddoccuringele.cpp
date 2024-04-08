//Binary search = classical
//search space
//predicate
//index logic


//Find the odd occuring element
//all element - evenno. of times occur except one - odd
//all repeating numbers - pairs repeat && pairs are not repeated
//ek baar koi bhi no. 2 se jada baar ni aa skta 
//find tht element which occur odd times
//1st approach - xor but time complexity with xor is O(n)
//2nd approach - count  use map
//sorting = 3 times
// array is 1 1 5 5 2 2 3 3 2 4 4


//Approach - ans left side pair 1st element - even index
//2nd element - odd index
//at right side pair 1st element - odd index
//2nd element - even index;
//Gurranteee ans = even index;
//pair not exist single element and tht is answer


//1st case = single element s==e return s;
//2nd CASE = if (mid % 2== 0) -> even if(arr[mid]==arr[mid+1]) right s = mid + 2;
//else right/ans; e = mid;
//3rd CASE = if(mid%2==1) -> odd if(arr[mid]==arr[mid-1])//mein ans ke left mein hu 
//right = s = mid + 1;
//else left = mid -1;

#include<iostream>
#include<vector>
using namespace std;
int findOddOccuringelement(vector<int> &v){
    int s = 0;
    int e = v.size()-1;
    int mid = s + (e-s)/2;
    while(s<=e){
        //Single element
        if(s==e){
            return s;
        }
        //mid check -> even or odd
        if(mid & 1){
            if(mid -1 >= 0 && v[mid-1]==v[mid]){
                //right mein jao 
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        else{
            //even 
            if(mid + 1 < e+1 && v[mid] == v[mid + 1]){
                //right mein jao
                s = mid + 2;
            }
            else{
                //ya toh mein right part pr khada hu 
                //ya mein answer ke upar khra hu 
                //that's why e = mid kr rah hu 
                //because e = mid - 1 se answer lost ho skta hai 
                e = mid;
            }

        }
        mid = s + (e-s)/2;
    }
    return -1;
}
int main(){
    vector<int> v;
    int n;
    cout<<"Enter the number that how many you wants to take : ";
    cin>>n;
    for(int i = 0; i < n;i++){
        int data;
        cin>>data;
        v.push_back(data);
    } 
    int ansIndex = findOddOccuringelement(v);
    cout<<"Final ans is : "<<v[ansIndex]<<" at index : "<<ansIndex<<endl;
    return 0;
}
