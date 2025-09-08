#include <functional>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

std::function<int(int)> doubleEvenNumbers = [](int x){if (x%2 == 0) {return x*2;} else {return x;};};

int main() {

    std::vector<int> myVector = {1,2,3,4,5,6};
    std::vector<int> resultvector(myVector.size());


    std::transform(myVector.begin(), myVector.end(), resultvector.begin(), doubleEvenNumbers);

    int sum = std::accumulate(resultvector.begin(), resultvector.end(),0);

    std::cout << sum;


}