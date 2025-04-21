#include <iostream>
#include <vector>


std::pair<std::vector<int>, std::vector<int>> inputNumbers() {
    std::vector<int> object_standard, input_objects;
    //king:1, queen:1, look:2, knit:2, pone:8
    object_standard = {1, 1, 2, 2, 2, 8};
    //input objects of chess
    for(int i = 0; i < static_cast<int>(object_standard.size()); ++i){
        int object_number = 0;
        std::cin >> object_number;
        input_objects.push_back(object_number);
    }
    return {object_standard, input_objects};
}

void printResult(const std::vector<int>& object_standard, const std::vector<int>& input_objects) {
    for (int i = 0; i < static_cast<int>(object_standard.size()); ++i) {
        std::cout << object_standard[i] - input_objects[i];
        if (i != static_cast<int>(object_standard.size()) - 1) std::cout << " ";
    }
}

int main() {
    std::pair chess_pieces = inputNumbers();
    std::vector<int> object_standard = chess_pieces.first;
    std::vector<int> input_objects = chess_pieces.second;
    printResult(object_standard, input_objects);

    return 0;
}