#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N;
    std::cin >> N;
    std::vector<int> x_n(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> x_n[i];
    }

    std::vector<int> index = x_n; 
    std::sort(index.begin(), index.end());
    index.erase(std::unique(index.begin(), index.end()), index.end());

    for (int i = 0; i < N; ++i) {
        int compressed = std::lower_bound(index.begin(), index.end(), x_n[i]) - index.begin();
        std::cout << compressed;
        if (i != N - 1) std::cout << ' ';
    }
    std::cout << '\n';
    return 0;
}