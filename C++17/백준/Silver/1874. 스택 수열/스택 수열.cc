#include <iostream>
#include <stack>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, current = 1;
    std::cin >> n;
    std::stack<int> numbers;
    std::vector<char> result;

    for(int i = 1; i <= n; ++i) {
        int element;
        std::cin >> element;
        if (element >= current) {
            while (current <= element) {
                numbers.push(current);
                result.push_back('+');
                ++current;
            }
        }
        if (numbers.top() == element) {
            numbers.pop();
            result.push_back('-');
        } else {
            std::cout << "NO";
            return 0;
        }
    }

    for (const char &op : result) {
        std::cout << op << '\n';
    }

    return 0;
}