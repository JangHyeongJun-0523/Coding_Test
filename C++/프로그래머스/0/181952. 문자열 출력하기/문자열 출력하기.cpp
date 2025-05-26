#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    for (char ch : str) {
        cout << ch;
    }
    return 0;
}