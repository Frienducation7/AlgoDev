
int getFirst(vector<int> &arr, int n, int x)
{

    // complete this
    for (int i=0; i < n; i++){
        if(arr[i] == x){
            return i;
        }
    }
}

int getLast(vector<int> &arr, int n, int x)
{

    // complete this
    for(int i=n-1; i>=0; i--){
        if(arr[i]==x){
            return i;
        }
    }
}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{

    pair<int, int> p;

    int firstO = getFirst(arr, n, k);
    int lastO = getLast(arr, n, k);

    p = (make_pair(firstO, lastO));

    return p;
}
