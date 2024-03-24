#ifndef __QUICK_SORT_H
#define __QUICK_SORT_H

#include <stack>
#define True  (01u)
#define False (00u)
class quicksort
{

    private:

    int pivot;

    int pi;

public:

// Function to partition the array

int partition(int *arr, int low, int high);

// QuickSort function

void quickSort(int *arr, int low, int high);
void quickSortWNR(int *arr, int low, int high);

};


#endif /* __MAIN_H */
