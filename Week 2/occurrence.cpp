#include <iostream>
using namespace std;
int firstOccurrence(int arr[], int n, int key) {
    int low = 0, high = n - 1, res = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            res = mid;
            high = mid - 1;
        } else if (arr[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return res;
}

int lastOccurrence(int arr[], int n, int key) {
    int low = 0, high = n - 1, res = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            res = mid;
            low = mid + 1;
        } else if (arr[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return res;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, key;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        cin >> key;

        int first = firstOccurrence(arr, n, key);
        int last = lastOccurrence(arr, n, key);

        if (first == -1)
            cout << "Key not present\n";
        else
            cout << key << " - " << (last - first + 1) << endl;
    }
}