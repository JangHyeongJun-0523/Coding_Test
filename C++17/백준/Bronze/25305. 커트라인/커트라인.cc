#include <iostream>
#include <algorithm>

int main() {
    int N, k;

    //input
    std::cin >> N >> k;
    int scores[N];
    for (int i = 0; i < N; ++i) {
        std::cin >> scores[i];
    }

    //STL sort
    std::sort(scores, scores + N, std::greater<int>());
    
    std::cout << scores[k-1] << std::endl;
    return 0;
}