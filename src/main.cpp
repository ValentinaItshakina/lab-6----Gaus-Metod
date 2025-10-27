#include <iostream>
#include "func.cpp"
#include <vector>

int main(){
    std::vector<std::vector<float>> arr = {{3, -0.1, -0.2, 7.85}, {0.1, 7, -0.3, -19.3}, {0.3, -0.2, 10, 71.4}};
    std::vector<float> rez = Jordan_GaussMethod(arr);
    for (float num : rez) {
        std::cout << num << " ";
    }
    return 0;
}