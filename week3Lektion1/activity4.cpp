#include <vector>
#include <iostream>

int main() {
    std::vector<int> minVector = {1,2,3,4,5};

    int mult = 2;

    for (auto i : minVector) {
        std::cout << [mult, i]() {return i*mult;}();
    }

}