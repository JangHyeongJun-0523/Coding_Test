#include <iostream>
#include <vector>


std::vector<float> inputInitialScore(int subject_num) {
    std::vector<float> midterm_scores;
    for (int i = 0; i < subject_num; ++i) {
        int score = 0;
        std::cin >> score;
        midterm_scores.push_back(score);
    }
    return midterm_scores;
}

float findMaximumScore(const std::vector<float>& midterm_scores) {
    float maximum_score = 0;
    int subjects = static_cast<int>(midterm_scores.size());
    for (int i = 0; i < subjects; ++i) {
        if (midterm_scores[i] > maximum_score) {
            maximum_score = midterm_scores[i];
        }
    }
    return maximum_score;
}

std::vector<float> modifyScores(const std::vector<float>& midterm_scores, const float maximum_score) {
    std::vector<float> modded_scores = midterm_scores;
    int subjects = static_cast<int>(modded_scores.size());
    for (int i = 0; i < subjects; ++i) {
        modded_scores[i] = modded_scores[i] / maximum_score * 100;
    }
    return modded_scores;
}

float getAverage(const std::vector<float>& modded_scores) {
    float average, total_score = 0;
    int length = static_cast<int>(modded_scores.size());
    for (int i = 0; i < length; ++i) {
        total_score += modded_scores[i];
    }

    average = total_score / length;

    return average;
}

int main() {
    int subject_num = 0, maximum_score = 0;
    float average = 0;
    std::cin >> subject_num;
    std::vector<float> midterm_scores = inputInitialScore(subject_num);
    maximum_score = findMaximumScore(midterm_scores);
    std::vector<float> modded_scores = modifyScores(midterm_scores, maximum_score);
    average = getAverage(modded_scores);
    std::cout << average;

    return 0;
}