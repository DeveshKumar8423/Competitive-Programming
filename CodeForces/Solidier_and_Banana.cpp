#include <iostream>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    int totalCost = 0;
    for (int i = 1; i <= w; ++i)
        totalCost += i * k;

    int amountToBorrow = totalCost - n;
    if (amountToBorrow < 0)
        amountToBorrow = 0;

    cout << amountToBorrow << endl;

    return 0;
}
