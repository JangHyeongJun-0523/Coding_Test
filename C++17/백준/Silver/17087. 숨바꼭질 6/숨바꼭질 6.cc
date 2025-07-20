#include <iostream>
#include <vector>

int findGCD (int a, int b) {
    if (b == 0) return a;
    return findGCD(b, a % b);
}

int main() {
    int N, S;
    std::cin >> N >> S;
    std::vector<int> target_positions;
    std::vector<int> displacements;

    while(N --) {
        int position;
        std::cin >> position;
        target_positions.push_back(position);
        int displacement = std::abs(position - S);
        displacements.push_back(displacement);
    }

    int d = displacements[0];
    for (int i = 1; i < static_cast<int>(displacements.size()); i++) {
        d = findGCD(d, displacements[i]);
    }

    std::cout << d << std::endl;

    return 0;
}