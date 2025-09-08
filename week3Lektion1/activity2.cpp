#include <functional>


void forEach(int* arr, int size, std::function<void(int)> func) {
    for (int i = 0; i<size; i++) {
        func(arr[i]);
    }

}