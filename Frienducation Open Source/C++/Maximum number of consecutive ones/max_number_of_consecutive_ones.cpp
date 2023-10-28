// C++ program to count maximum consecutive
// ones in a binary array.
#include<bits/stdc++.h>
using namespace std;
 
// Function to Return count of maximum consecutive ones
// in a binary array
int max_cons_ones(int arr[], int size)
{
    int count = 0; //initialize count
    int answer = 0; //initialize max
 
    for (int i = 0; i < size; i++)
    {
        // Resetting count to 0 when 0 is found
        if (arr[i] == 0)
            count = 0;
        //when 1 is found
        else
        {
            count++;//increase count
            answer = max(answer, count);
        }
    }
 
    return answer;
}
 
// Driver code
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout << max_cons_ones(arr, n) << endl;
    return 0;
}