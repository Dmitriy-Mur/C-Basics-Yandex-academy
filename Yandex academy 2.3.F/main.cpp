#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int sum = 0;
    for (char i : str)
        sum = sum + (static_cast<int>(i) - 48);
    cout << sum;
    return 0;
}
