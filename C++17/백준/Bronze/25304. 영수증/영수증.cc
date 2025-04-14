#include <iostream>
#include <string>


long CalculateTotalPrice(long number_of_items) {
    long calcuclated_total_price = 0;
    
    for (long i = 0; i < number_of_items; ++i) {
        long price = 0, amount = 0;
        std::cin >> price >> amount;
        calcuclated_total_price += price * amount;
    }

    return calcuclated_total_price;
}

std::string IsTotalPriceRight(long price_in_receipt, long calculated_price) {
    if (price_in_receipt == calculated_price) {
        return "Yes";
    }
    else {
        return "No";
    }
}

int main() {
    long price_in_receipt = 0, number_of_items = 0;
    std::cin >> price_in_receipt >> number_of_items;
    std::cout << IsTotalPriceRight(price_in_receipt, CalculateTotalPrice(number_of_items)) << std::endl;

    return 0;
}