#include <iostream>
using namespace std;

#include "sorting.h"

int main(int argc, char *argv[])
{
    // cout << "argc is " << argc << endl;

    int N;
    int *a = new int[argc - 1];
    parse(argc, argv, a);

    N = argc - 1;
    cout << "Before sorting: ";
    display(a, N);

    insertionSort(a, N);
    cout << "After sorting: ";
    display(a, N);

    return 0;
}