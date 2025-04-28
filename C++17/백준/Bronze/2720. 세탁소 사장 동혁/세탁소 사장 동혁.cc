#include <iostream>

int main() {
    int test_case, cent;
    const int quarter = 25, dime = 10, nickel = 5, penny = 1;
    std::cin >> test_case;
    for (int i = 0; i < test_case; ++i) {
        int quarter_num = 0, dime_num = 0, nickel_num = 0, penny_num = 0;
        std::cin >> cent;
        while (cent != 0) {
            if (cent / quarter >= 1) {
                quarter_num = cent / quarter;
                cent %= quarter;
            } else if (cent / dime >= 1) {
                dime_num = cent / dime; 
                cent %= dime;
            } else if (cent / nickel >= 1) {
                nickel_num = cent / nickel;
                cent %= nickel;
            } else {//penny
                penny_num = cent / penny;
                cent %= penny;
            }
        }
        std::cout << quarter_num << ' ' << dime_num << ' ' 
                    << nickel_num << ' ' << penny_num << std::endl;
    }

    return 0;
}