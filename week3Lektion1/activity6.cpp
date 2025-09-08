#include <vector>
#include <functional>
#include <iostream>

std::vector<int> filter(const std::vector<int>& input, std::function<bool(int)> pred) {
    std::vector<int> nyVec;

    for (int i : input) {
        if (pred(i)) {
            nyVec.push_back(i);
        }
    }
    return nyVec;
}


int main() {
    std::function<bool(int)> func = [](int x){ return x > 0; }; 
    std::vector<int> values = { -3, 0, 2, 5, -1, 7 };
    std::vector<int> filtered = filter(values, func);

    for (int val : filtered) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}