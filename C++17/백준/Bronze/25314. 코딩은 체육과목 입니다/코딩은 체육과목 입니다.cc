#include <iostream>


int GetItterationNumber(int byte) {
    int itteration = 0;
    itteration = byte / 4;

    return itteration;
}

void LongPrinter(int itteraton) {
    for (int i = 0; i < itteraton; ++i) {
        std::cout << "long" << " ";
    }
    std::cout << "int" << std::endl;
}

int main() {
    int byte = 0;
    std::cin >> byte;
    LongPrinter(GetItterationNumber(byte));

    return 0;
}