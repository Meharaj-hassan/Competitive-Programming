#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int count = 0;
 
    for (int i = 0; i < n; i++) {
        
        string a;
        cin >> a;
 
        if (a == "X++" || a == "++X") {
            count++;
        }
        else if(a == "X--" || a == "--X"){
 
            count--;
        }
    }
 
    cout << count << endl;
 
    return 0;
}