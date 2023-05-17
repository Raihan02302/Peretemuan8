#include <iostream>
#include <vector>

bool isOdd(int number) {
    return number % 2 != 0;
}

void printSmallestEven(const std::vector<int>& arr) {
    int smallestEven = INT_MAX;
    int smallestEvenIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEven) {
            smallestEven = arr[i];
            smallestEvenIndex = i;
        }
    }

    if (smallestEvenIndex != -1) {
        std::cout << "Nilai genap terkecil: " << smallestEven << std::endl;
        std::cout << "Index: " << smallestEvenIndex << std::endl;
    } else {
        std::cout << "Tidak ada nilai genap dalam deret bilangan." << std::endl;
    }
}

int main() {
    std::vector<int> A = {6, 7, 4, 3, 2};

    printSmallestEven(A);

    return 0;
}
