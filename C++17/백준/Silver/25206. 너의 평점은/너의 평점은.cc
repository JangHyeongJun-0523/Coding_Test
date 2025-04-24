#include <iostream>
#include <vector>
#include <sstream>

std::vector<std::string> getGrades(const int& subject_number) {
    std::vector<std::string> grades;
    for (int i = 0; i < subject_number; ++i) {
        std::string line;
        std::getline(std::cin, line);
        grades.push_back(line);
    }
    return grades;
}

double textGradeToNumber(const std::string& text_grade) {
    if (text_grade == "A+") return 4.5;
    if (text_grade == "A0") return 4.0;
    if (text_grade == "B+") return 3.5;
    if (text_grade == "B0") return 3.0;
    if (text_grade == "C+") return 2.5;
    if (text_grade == "C0") return 2.0;
    if (text_grade == "D+") return 1.5;
    if (text_grade == "D0") return 1.0;
    return 0.0; // F, P
}

double getGPA(const std::vector<std::string>& grades) {
    double total_score = 0, total_credit = 0;
    for (const auto& line : grades) {
        std::istringstream iss(line);
        std::string subject, credit_str, text_grade;
        iss >> subject >> credit_str >> text_grade;

        if (text_grade == "P") continue;

        double credit = std::stod(credit_str);
        double grade_score = textGradeToNumber(text_grade);

        total_score += credit * grade_score;
        total_credit += credit;
    }

    return total_score / total_credit;
}

int main() {
    int subject_number = 20;
    std::vector<std::string> grades = getGrades(subject_number);
    std::cout << getGPA(grades) << std::endl;
    return 0;
}