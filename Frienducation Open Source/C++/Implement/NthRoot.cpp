#include <iostream>
#include <cmath>
using namespace std;

double nthRoot(double number, double n)
{   
    //guessing the root
    double X_pre = rand() % 10;

    //defining the accuracy
    double accuracy = 1e-6;

    //initializing the difference as maximum
    double del_X = INT_MAX;
    
    //defining value of X on Kth iteration
    double X_k;

    //using Newton's formula iteratively and updating the value of del_X and X_k each time
    while (del_X > accuracy)
    {
        X_k = ((n - 1.0) * X_pre + number / pow(X_pre, n - 1)) / n;
        del_X = abs(X_k - X_pre);
        X_pre = X_k;
    }

    return X_k;
}

int main()
{
    double number, n;
    //taking inputs of number and value of n
    cout << "Enter the number for finding root: ";
    cin >> number;
    cout << "Enter the value of n: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid input: 'n' must be greater than 0." << endl;
    }
    else
    {
        cout << "The " << n << "th root of " << number << " is: " << nthRoot(number, n) << endl;
    }

    return 0;
}
