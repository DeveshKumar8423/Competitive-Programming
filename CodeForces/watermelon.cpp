#include<iostream>
using namespace std;

int main() {
    int w;
    cin >> w;

    // weight is even and at least 4
    if (w % 2 == 0 && w > 2) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
