#include<iostream>
#include<vector>
using namespace std;
vector<int> rowAndMaximumOnes(vector<vector<int> >& mat) {
        vector<int> ans;
        int n = mat.size();
        //oneCount = will store max no. of 1's in row
        int oneCount = INT_MIN;
        //row no  = will store max no . of index wali row
        int rowNo = -1010;
        for(int i = 0; i < n;i++){
            int count = 0;
            for(int j = 0; j<mat[i].size();j++){
                if(mat[i][j] == 1){
                    count++;
                }
            }
            //after row completion compare count with oneCount
            if(count>oneCount){
                oneCount = count;
                rowNo = i;
            }
        }
    ans.push_back(rowNo);
    ans.push_back(oneCount);
    return ans;
    }
int main(){
    //row with maximum one's
    int n, m;
    cout << "Enter the number of rows and columns: ";
    cin >> n >> m;

    // Declare a 2D vector of size n x m
    vector<vector<int> > matrix(n, vector<int>(m));

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    vector<int> ma = rowAndMaximumOnes(matrix);
    cout<<"[";
    for(int i = 0; i  < ma.size();i++){
        cout<<ma[i]<<",";
    }
    cout<<"]";
    return 0;
}