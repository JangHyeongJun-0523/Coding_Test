#include <iostream>

int BuddhistYearToAnnoDominiYear(int buddhist_year) {
    const int buddhist_year_offset = 543;
    int anno_domini_year = buddhist_year - buddhist_year_offset;
    return anno_domini_year;
}

int main() {
    int buddhist_year;
    std::cin >> buddhist_year;
    std::cout << BuddhistYearToAnnoDominiYear(buddhist_year) << std::endl;
    return 0;
}