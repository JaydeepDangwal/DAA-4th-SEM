#include <iostream>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, key;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cin >> key;

        int low = 0, high = n - 1;
        int comparisons = 0;
        bool found = false;

        while (low <= high) {
            int mid = (low + high) / 2;
            comparisons++;

            if (arr[mid] == key) {
                found = true;
                break;
            } else if (arr[mid] < key) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        if (found)
            cout << "Present " << comparisons << endl;
        else
            cout << "NotPresent " << comparisons << endl;
    }
    return 0;
}