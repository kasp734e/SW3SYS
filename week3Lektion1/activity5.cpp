#include <vector>
#include <functional>
#include <iostream>

std::vector<int> transform(const std::vector<int>& input, std::function<int(int)> f) {
    std::vector<int> nyVec;
    nyVec.reserve(input.size());

    for (int i = 0; i < input.size(); i++) {
        nyVec.push_back(f(input[i]));
    }
    return nyVec;
}

int multByTwo(int x) {
    return x*2;
}

int main() {
    std::vector<int> myVec = {1,2,3,4,5};
    std::function<int(int)> functionPointer = multByTwo;

    std::vector<int> transformedVector = transform(myVec, multByTwo);

    for (int i : myVec) {
        std::cout << i << "\n";
    }

    std::cout << "\n \n";

    for (int i : transformedVector) {
        std::cout << i << "\n";
    }

}