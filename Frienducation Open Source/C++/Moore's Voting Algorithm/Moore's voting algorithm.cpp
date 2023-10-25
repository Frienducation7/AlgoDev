// C++ implementation for Moore's Voting Algorithm
#include <iostream>
using namespace std;
// Function to find majority element using Moore's Voting Algorithm
int findMajority(int arr[], int size)
{
    int candidateno = -1; 
    int votes = 0;
    // Finding majority candidate
    for (int i = 0; i < size; i++) {
        if (votes == 0) {
            candidateno = arr[i];
            votes = 1;
        }
        else {
            if (arr[i] == candidateno)
                votes++;
            else
                votes--;
        }
    }
    
    // Checking if majority candidate occurs more than n/2
    // times
    int cnt = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == candidateno)
            cnt++;
    }
 
    if (cnt > size / 2)
        return candidateno;
    return -1;
}
int main()
{
     //declaring size of array 
    int n;
    cin>>n;
    //declaring an array of size n
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //calling the function
    int majorityelement = findMajority(arr, n);
    cout << " The majority element is : " << majorityelement;
    return 0;
}