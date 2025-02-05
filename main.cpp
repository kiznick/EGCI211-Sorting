#include <cstring>
#include <iostream>
using namespace std;

#include "sorting.h"

int main(int argc, char *argv[])
{
    // cout << "argc is " << argc << endl;
    // for (int i = 0; i < argc; i++)
    // {
    //     cout << "argv[" << i << "]: " << argv[i] << endl;
    // }

    if (argc < 1)
    {
        cout << "Format: " << argv[0] << " [bubble, insertion, selection] (Number)" << endl;
        return 0;
    }

    int N = argc - 2;
    int *a = new int[N];
    parse(argc, argv, a);

    cout << "Before sorting: ";
    display(a, N);

    if (strcmp(argv[1], "bubble") == 0)
    {
        bubbleSort(a, N);
    }
    else if (strcmp(argv[1], "insertion") == 0)
    {
        insertionSort(a, N);
    }
    else if (strcmp(argv[1], "selection") == 0)
    {
        selectionSort(a, N);
    }
    else
    {
        cout << "Format: " << argv[0] << " [bubble, insertion, selection] (Number)" << endl;
        return 0;
    }

    cout << "After sorting: ";
    display(a, N);

    return 0;
}