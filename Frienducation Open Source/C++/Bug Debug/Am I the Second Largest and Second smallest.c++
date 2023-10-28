// Question Link : https://www.codingninjas.com/studio/problems/ninja-and-the-second-order-elements_6581960
#include <iostream>
#include <vector>
#include <climits>
std::vector<int> getSecondOrderElements(int n, std::vector<int> a)
{
   std:: vector<int> ans;
    int small = INT_MAX, secSmall = INT_MAX, large = INT_MIN, secLarge = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < small)
        {
            secSmall = small;
            small = a[i];
        }
        else if (a[i] < secSmall && a[i] > small) // Corrected this condition
        {
            secSmall = a[i];
        }

        if (a[i] > large)
        {
            secLarge = large;
            large = a[i];
        }
        else if (a[i] > secLarge && a[i] < large) // Corrected this condition
        {
            secLarge = a[i];
        }
    }

    ans.push_back(secLarge);
    ans.push_back(secSmall);

    return ans;
}
