//#include <iostream>

#include <algorithm>
#include "main.h"
#include "quick_sort.h"

using namespace std;



// Function to partition the array



int quicksort::partition(int *arr, int low, int high) {

    pivot = arr[high]; // Choose the last element as the pivot

    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {

        if (arr[j] < pivot) {

            i++;

            swap(arr[i], arr[j]);

        }

    }

    swap(arr[i + 1], arr[high]);

    return i + 1;

}

// QuickSort function

void quicksort::quickSort(int *arr, int low, int high) {

    if (low < high) {

        pi = partition(arr, low, high); // pi is partitioning index

        quickSort(arr, low, pi - 1); // Sort the elements before partition

        quickSort(arr, pi + 1, high); // Sort the elements after partition

    }

}

// QuickSort function without recursion
void quicksort::quickSortWNR(int *arr, int low, int high) {
        stack<pair<int, int>> s;
        s.push({low, high});

        while (!s.empty()) {
            // Pop the top pair from the stack
            pair<int, int> curr = s.top();
            s.pop();
            int low = curr.first;
            int high = curr.second;

            // Partition the array
            int pi = partition(arr, low, high);

            // If there are elements on the left of the pivot, push the left sub-array
            if (pi - 1 > low) {
                s.push({low, pi - 1});
            }

            // If there are elements on the right of the pivot, push the right sub-array
            if (pi + 1 < high) {
                s.push({pi + 1, high});
            }
        }
    }



