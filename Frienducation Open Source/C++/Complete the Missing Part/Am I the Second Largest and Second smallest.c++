// Question Link : https://www.codingninjas.com/studio/problems/ninja-and-the-second-order-elements_6581960
vector<int> getSecondOrderElements(int n, vector<int> a)
{

    vector<int> ans;

    int small = INT_MAX, secSmall = INT_MAX, large = INT_MIN, secLarge = INT_MIN;

    for (int i = 0; i < n; i++)
    {

        if (a[i] < small)
        {

            secSmall = small;
            small = a[i];
        }

        if (a[i] < secSmall)
        {
            secSmall = a[i];
        }

        if (a[i] > large)
        {

            secLarge = large;
            large = a[i];
        }

        if (a[i] > secLarge)
        {
            secLarge = a[i];
        }
    }

    ans.push_back(secLarge);
    ans.push_back(secSmall);

    return ans;
}
