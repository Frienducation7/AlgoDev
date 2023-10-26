bool isValid(vector<int> &arr, int pages, int m)
{
    // complete this
}

int findPages(vector<int> &arr, int n, int m)
{

    // if students (m) > books(n)
    if (n < m)
    {
        return -1;
    }

    int low = *max_element(arr.begin(), arr.end());

    int high = 0, ans = -1;

    for (int i = 0; i < n; i++)
    {
        high += arr[i];
    }

    while (low <= high)
    {

        int mid = low + (high - low) / 2;

        if (isValid(arr, mid, m))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return ans;
}