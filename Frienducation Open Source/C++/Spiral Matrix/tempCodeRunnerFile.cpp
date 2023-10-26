// C++ Program to print a matrix in spiral order
#include <bits/stdc++.h>
using namespace std;

void spiralmatrix(int m, int n, vector<vector<int>>&a)
{
    int row = 0, col= 0;
 
    /* row- starting row index
        m - ending row index
        col- starting column index
        n - ending column index
       
    */
 
    while (row < m && col< n) {
        /* Printing the first row from
               the remaining rows */
        for (int i = col; i < n; ++i) {
            cout << a[row][i] << " ";
        }
        row++;
 
        /* Printing the last column
         from the remaining columns */
        for (int i = row; i < m; ++i) {
            cout << a[i][n - 1] << " ";
        }
        n--;
 
        /* Printing the last row from
                the remaining rows */
        if (row < m) {
            for (int i = n - 1; i >= col; --i) {
                cout << a[m - 1][i] << " ";
            }
            m--;
        }
 
        /* Printing the first column from
                   the remaining columns */
        if (col < n) {
            for (int i = m - 1; i >= row; --i) {
                cout << a[i][col] << " ";
            }
            col++;
        }
    }
}
 
/* Driver Code */
int main()
{
    int r;//number of rows
    int c;//number of columns
    cin>>r>>c;
    vector<vector<int>>a;//declaration of vector of vectors  to store matrix elements

   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>a[i][j];
    }
   }
 
    // Function Call
    spiralmatrix(r, c, a);
    for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<a[i][j];
    }
   }
    return 0;
}