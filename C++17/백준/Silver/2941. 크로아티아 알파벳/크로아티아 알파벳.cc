#include <iostream>
#include <string>

std::string readAlphabets() {
    std::string input_alphabets;
    std::cin >> input_alphabets;

    return input_alphabets;
}

int countAlphabets (const std::string& input_alphabets) {
    int count = 0;
    for (int i = 0; i < static_cast<int>(input_alphabets.size()); ++i) {
        if (input_alphabets[i] == 'c' 
            && (input_alphabets[i+1] == '=' || input_alphabets[i+1] == '-')) {
                ++count; //count: "c=" or "c-"
                i += 1; //shift index one more
        }
        else if (input_alphabets[i] == 'd' && input_alphabets[i+1] == '-') {
            ++count; //count: "d-"
            i += 1; //shift index one more
        }
        else if (input_alphabets[i] == 'd' 
            && input_alphabets[i+1] == 'z' && input_alphabets[i+2] == '=') {
                ++count; //count: "dz="
                i += 2; //shift index two more
            }
        else if (input_alphabets[i] == 'l' && input_alphabets[i+1] == 'j') {
            ++count; //count: "lj"
            i += 1; //shift index one more
        }
        else if (input_alphabets[i] == 'n' && input_alphabets[i+1] == 'j') {
            ++count; //count: "nj"
            i += 1; //shift index one more
        }
        else if ((input_alphabets[i] == 's' || input_alphabets[i] == 'z')
            && input_alphabets[i+1] == '=') {
                ++count; //count: "s=" or "z="
                i += 1; //shift index one more
            }
        else ++count; //non-croatian alphabets
            
    }

    return count;
}


int main() {
    std::string input_alphabets = readAlphabets();
    std::cout << countAlphabets(input_alphabets) << std::endl;

    return 0;
}