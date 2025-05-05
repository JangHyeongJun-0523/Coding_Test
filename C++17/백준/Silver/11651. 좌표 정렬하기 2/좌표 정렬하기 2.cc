#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    //input
    int N;
    std::cin >> N;
    std::vector<std::pair<int, int>> points;
    for (int i = 0; i < N; ++i) {
        std::pair<int, int> point;
        std::cin >> point.first >> point.second;
        points.push_back(point);
    }

    //STL sort
    std::sort(points.begin(), points.end(), [](const auto& a, const auto& b) {
        return a.second == b.second ? a.first < b.first : a.second < b.second;
    });
    
    //output
    for (int i = 0; i < N; ++i) {
        std::cout << points[i].first << ' ' << points[i].second << '\n';
    }
    return 0;
}