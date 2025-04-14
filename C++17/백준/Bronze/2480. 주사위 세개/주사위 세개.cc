#include <iostream>

int GetPrice(int first_dice, int second_dice, int third_dice) {
    int price = 0;

    if (first_dice == second_dice && second_dice == third_dice) {
        price = 10000 + first_dice * 1000;
    }
    else if (first_dice == second_dice) {
        price = 1000 + first_dice * 100;
    }
    else if (second_dice == third_dice) {
        price = 1000 + second_dice * 100;
    }
    else if (third_dice == first_dice) {
        price = 1000 + third_dice * 100;
    }
    else if (first_dice != second_dice && second_dice != third_dice && third_dice != first_dice) {
        if (first_dice > second_dice && first_dice > third_dice) {
            price = first_dice * 100;
        }
        else if (second_dice > first_dice && second_dice > third_dice) {
            price = second_dice * 100;
        }
        else if (third_dice > first_dice && third_dice > second_dice) {
            price = third_dice * 100;
        }
    }

    return price;
}



int main() {
    int first_dice = 0, second_dice = 0, third_dice = 0;
    std::cin >> first_dice >> second_dice >> third_dice;
    std::cout << GetPrice(first_dice, second_dice, third_dice) << std::endl;

    return 0;
}