#include <iostream>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    int arr[n];
 
    // Input all scores
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    int count = 0;
 
    // Check each contestant
    for (int i = 0; i < n; i++) {
 
        // Score must be >= k-th contestant's score
        // and score must be greater than 0
        if (arr[i] >= arr[k - 1] && arr[i] > 0) {
            count++;
        }
 
    }
 
    cout << count << endl;
 
    return 0;
}