#include <iostream>
#include <vector>

// Bubble Sort (Descending)
void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    bool swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // Jika tidak ada pertukaran elemen pada iterasi ini, array sudah terurut dan loop dapat dihentikan.
        if (!swapped) {
            break;
        }
    }
}

// Quick Sort (Descending)
int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] > pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }

    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Fungsi bantu untuk mencetak array
void printArray(const std::vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> A = {5, 4, 3, 2, 2, 1, 1};

    std::cout << "Array sebelum pengurutan:" << std::endl;
    printArray(A);

    // Pengurutan dengan Bubble Sort
    bubbleSort(A);
    std::cout << "Array setelah pengurutan dengan Bubble Sort:" << std::endl;
    printArray(A);

    // Pengurutan dengan Quick Sort
    quickSort(A, 0, A.size() - 1);
    std::cout << "Array setelah pengurutan dengan Quick Sort:" << std::endl;
    printArray(A);

    return 0;
}
