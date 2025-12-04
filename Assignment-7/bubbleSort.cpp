#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){ //O(n^2) is the TC for avg and worst case. If the array is sorted,
    for(int i = n-1; i>=1; i--){ // which is the best case then the time complexity is O(N).
        int check = 0;
        for(int j = 0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp; check++;
            }
        if(check == 0) break; // the check var is just to optimize the code for the best possible scenario
        }                     // which is passing an sorted array
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) 
        cin >> arr[i];
        
    bubbleSort(arr, n);
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;   
}