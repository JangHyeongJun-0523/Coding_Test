#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int N;
    std::cin >> N;
    std::vector<std::tuple<int, int, std::string>> members;
    for (int i = 0; i < N; ++i) {
        int age;
        std::string name;
        std::cin >> age >> name;
        members.emplace_back(age, i, name);
    }

    std::sort(members.begin(), members.end(), [](const auto& a, const auto& b){
        if (std::get<0>(a) == std::get<0>(b)) return std::get<1>(a) < std::get<1>(b);
        return std::get<0>(a) < std::get<0>(b);
    });

    for (const auto& [age, _, name] : members) {
        std::cout << age << ' ' << name << '\n';
    }
    return 0;
}