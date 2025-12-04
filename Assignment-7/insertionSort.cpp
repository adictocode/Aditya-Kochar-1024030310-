#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) { // O(N^2) for worst and avg case
    for(int i = 0; i < n; i++) { //O(N) for best case i.e. if the array is sorted
        int j = i;
        while(j > 0 && arr[j - 1] > arr[j]) {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
        
    insertionSort(arr, n);
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}