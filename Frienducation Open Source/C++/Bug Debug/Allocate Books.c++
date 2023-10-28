#include <vector>
bool isValid(std::vector<int> &arr, int pages, int m)
{
    int students = 1;
    int pages_allocated = 0;

    for(int i = 0; i< arr.size(); i++){
        if (arr[i]>pages){
            return false;
        }
        if(pages_allocated + arr[i] > pages){
            students++;
            pages_allocated = arr[i];

            if(students > m){
                return false;
            }
        }else{
            pages_allocated += arr[i];
        }
    } 
    return true;
}

int findPages(std::vector<int> &arr, int n, int m)
{

    // if students (m) > books(n)
    if (n < m)
    {
        return -1;
    }

    int low = 
    *std::max_element(arr.begin(), arr.end());

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