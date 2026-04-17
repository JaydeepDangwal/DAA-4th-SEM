#include <iostream>
#include <cmath>
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

        int step = 2; 
        int prev = 0;
        int comparisons = 0;
        bool found = false;
        while (prev < n && arr[min(prev, n-1)] < key) {
            comparisons++;
            prev += step;
        }
        int start = max(0, prev - step);
        int end = min(prev, n-1);

        for (int i = start; i <= end; i++) {
            comparisons++;
            if (arr[i] == key) {
                found = true;
                break;
            }
        }

        if (found)
            cout << "Present " << comparisons << endl;
        else
            cout << "NotPresent " << comparisons << endl;
    }

    return 0;
}