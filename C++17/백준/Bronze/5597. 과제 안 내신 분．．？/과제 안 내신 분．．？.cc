#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> wholeStudents(int students_num) {
    std::vector<int> whole_students;
    for (int i = 1; i <= students_num; ++i) {
        whole_students.push_back(i);
    }
    return whole_students;
}

std::vector<int> getUnsubmittedStudent(const std::vector<int>& whole_students, int submitted_students_num) {
    std::vector<int> unsubmitted_students = whole_students;
    for (int i = 0; i < submitted_students_num; ++i) {
        int student = 0;
        std::cin >> student;
        unsubmitted_students.erase(remove(unsubmitted_students.begin(), unsubmitted_students.end(), student), unsubmitted_students.end());
    }

    return unsubmitted_students;
}

void printResult(std::vector<int>& unsubmitted_students) {
    //sort
    std::sort(unsubmitted_students.begin(), unsubmitted_students.end());
    for (int num : unsubmitted_students) {
        std::cout << num << '\n';
    }
}

int main() {
    int students_num = 30, submitted_students_num = 28;
    std::vector<int> whole_students = wholeStudents(students_num);
    std::vector<int> unsubmitted_students = getUnsubmittedStudent(whole_students, submitted_students_num);
    printResult(unsubmitted_students);

    return 0;
}