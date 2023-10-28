int getFirst(vector<int> &arr, int n, int x)
{
    int low = 0, high = n - 1;
    int first = -1;
    while (low <= high) {
        int mid = (low + high) >> 1;
        if (arr[mid] == x) {
            first = mid;
            high = mid - 1;
        }
        else if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return first;
}

int getLast(vector<int> &arr, int n, int x)
{
    int low = 0, high = n - 1;
    int last = -1;
    while (low <= high) {
        int mid = (low + high) >> 1;
        if (arr[mid] == x) {
            last = mid;
            low = mid + 1;
        }
        else if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return last;
}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    pair<int, int> p;
    int firstO = getFirst(arr, n, k);
    int lastO = getLast(arr, n, k);
    p = (make_pair(firstO, lastO));
    return p;
}
