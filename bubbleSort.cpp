#include <bits/stdc++.h> 
using namespace std;

void bubbleSort(std::vector<int>& arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (arr[j] < arr[j - 1]) {
                std::swap(arr[j], arr[j - 1]);
            }
        }
    }
}

int main() {
    std::vector<int> arr = {5, 2, 9, 3, 1};
    int n = arr.size();

    bubbleSort(arr, n);

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
