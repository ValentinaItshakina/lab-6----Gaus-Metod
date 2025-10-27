#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::vector<float>> normal(std::vector<std::vector<float>> st, int n){
    std::vector<std::vector<float>> arr = st;
    int len = arr[0].size();
    float norm = arr[n][n];
    for (int i=0; i < len; i++){
        arr[n][i] /= norm;
    }
    return arr;
}

std::vector<float> Jordan_GaussMethod(std::vector<std::vector<float>> st){
    std::vector<std::vector<float>> arr = st;
    int line = arr.size();
    int col = arr[0].size();
    for (int i=0; i < line; i++){
        arr = normal(arr, i);
        for (int j=0; j < line; j++){
            float mnog = arr[j][i];
            for (int h=0; h < col; h++){
                if (i!= j){
                    arr[j][h] -= arr[i][h]*mnog;
                }
        }
        }
        for (std::vector<float> num : arr) {
            for (float nu : num) {
                std::cout << nu << " ";
            }
            std::cout << std::endl;
    }
    std::cout << std::endl;
    }
    std::vector<float> rez(line);
    for (int i=0; i < line; i++){
        rez[i] = arr[i][col-1];
    }
    return rez;
}