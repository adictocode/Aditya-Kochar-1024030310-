#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements:\n";
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    set<int> s(arr.begin(), arr.end());
    cout << "Array after removing duplicates:\n";
    for(auto it : s) {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}
