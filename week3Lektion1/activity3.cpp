#include <iostream>

int main() {
    for (int i = 0; i<5; i++) {std::cout << [](int x) { return x * x; }(i+1) << "\n";}
}