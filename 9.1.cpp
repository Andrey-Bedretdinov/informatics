#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int32_t n;
    int i = 8, dis, ten;
    string char_ = " + ";
    cin >> n;
    if (n < 0) cout << "-", n = abs(n), char_ = " - ";

    while (i != -1) {
        ten = pow(10, i);

        dis = n / ten;
        if (dis == 0) {
            i--;
            continue;
        }
        if (i != -1) cout << dis << "*10^" << i;
        if (i != 0) cout << char_;

        n %= ten;
        i -= 1;
    }

    return 0;
}