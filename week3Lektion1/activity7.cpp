#include <functional>
#include <iostream>

std::function<int(int)> compose(std::function<int(int)> outerFunc , std::function<int(int)> innerFunc){
    return [=](int x){return outerFunc(innerFunc(x));};
};

int main() {


    std::function<int(int)> add2 = [](int x){return x+2;};
    std::function<int(int)> multiply3 = [](int x){return x*3;};


    std::function<int(int)> combiFunc = compose(multiply3, add2);

    std::cout << combiFunc(3);


}