#include <iostream>
#include <string>

std::string GetOvenEndTime (int A, int B, int C) {
    std::string time;
    if ((B + C) >= 60) {
        A += (B + C) / 60;
        B = (B + C) % 60;

        if (A >= 24) {
            A -= 24;
        }
    }
    else {
        B += C;
    }

    time = std::to_string(A) + " " + std::to_string(B);

    return time;
}

int main() {
    int A = 0, B = 0, C = 0;
    std::cin >> A >> B >> C;
    std::cout << GetOvenEndTime(A, B, C) << std::endl;

    return 0;
}