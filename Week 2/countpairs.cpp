#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, K;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        cin >> K;

        sort(arr, arr + n);

        int i = 0, j = 1, count = 0;

        while (j < n) {
            if (arr[j] - arr[i] == K) {
                count++;
                i++;
                j++;
            }
            else if (arr[j] - arr[i] < K)
                j++;
            else
                i++;
            
            if (i == j) j++;
        }

        cout << count << endl;
    }
}