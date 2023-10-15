
int getFirst(vector<int> &arr, int n, int x)
{

    // complete this
}

int getLast(vector<int> &arr, int n, int x)
{

    // complete this
}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{

    pair<int, int> p;

    int firstO = getFirst(arr, n, k);
    int lastO = getLast(arr, n, k);

    p = (make_pair(firstO, lastO));

    return p;
}
