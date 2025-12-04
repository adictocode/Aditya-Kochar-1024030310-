#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) {
    int left = 0;
    int right = n - 1;

    while (left < right) {
        int mini = left;
        int maxi = right;

        for (int i = left; i <= right; i++) {
            if (arr[i] < arr[mini]) {
                mini = i;
            }
            if (arr[i] > arr[maxi]) {
                maxi = i;
            }
        }
        swap(arr[left], arr[mini]);

        if (maxi == left) {
            maxi = mini;
        }
        swap(arr[right], arr[maxi]);

        left++;
        right--;
    }
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selectionSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
