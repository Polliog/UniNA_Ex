#include <iostream>
#define MAX_LIST 150
typedef int list[MAX_LIST];

int main() {
    list r = {0,2,4,5};
    int max = 0, min = 0;

    for (int i : r) {
        if (i > max) {
            max = i;
        }
        if (i < min) {
            min = i;
        }
    }

    std::cout << "Max: " << max << std::endl;
    std::cout << "Min: " << min << std::endl;
}

