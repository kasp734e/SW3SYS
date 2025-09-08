#include <functional>
#include <iostream>

int add(int a, int b) {
    return a+b;
}

std::function<int(int,int)> funktion = add;

int apply(std::function<int(int,int)> func, int x, int y) {
    return func(x,y);
}

int main() {
    std::cout << apply(funktion, 1, 2);
}