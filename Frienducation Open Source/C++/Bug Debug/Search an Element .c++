#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
	int k;
    cin>>k;
	int low = 0, high = n - 1;
	int ans = -1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] > k) {
			high = mid - 1;
		}
		else if (arr[mid] < k) {
			low = mid + 1;
		}
		else {
			ans = mid;
			break;
		}
	}
	cout << "The element is present in "<<ans<<" index";
    return 0;
}

