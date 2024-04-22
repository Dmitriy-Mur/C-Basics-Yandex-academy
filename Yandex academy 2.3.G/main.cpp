#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    double ans = 1;
    for (int i = 2; i <= n; i++) {
        ans = ans + (pow(-1, i + 1) / i);
    }
    cout << ans;
    return 0;
}
