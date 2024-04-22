#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool validation(string s);

int main() {
    string password;
    getline(cin, password);
    cout << (validation(password) ? "YES", "NO");
    return 0;
}

bool validation(string s) {
    bool lower = false;
    bool upper = false;
    bool digit = false;
    bool other = false;
    if (!(s.size() > 7 and s.size() < 15))
        return "NO";
    for (char i : s) {
        if (static_cast<int>(i) < 33)
            return "NO";
        if (static_cast<int>(i) > 126)
            return "NO";
        if (islower(i))
            lower = true;
        if (isupper(i))
            upper = true;
        if (isdigit(i))
            digit = true;
        if (ispunct(i))
            other = true;
    }
    cout << lower << upper << digit << other << '\n';
    if ((lower + upper + digit + other) < 3)
        return false;
    return true;
}