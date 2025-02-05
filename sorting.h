void parse(int argc, char *argv[], int output[]);
void swap(int &a, int &b);
void bubbleSort(int *a, int N);
void selectionSort(int *a, int N);
void insertionSort(int *a, int N);
void display(int *a, int N);

void parse(int argc, char *argv[], int output[])
{
    for (int i = 2; i < argc; i++)
    {
        output[i - 2] = atoi(argv[i]);
        // cout << "argv[" << i << "]: " << argv[i] << endl;
    }
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int *a, int N)
{
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                display(a, N);
            }
        }
    }
}

void selectionSort(int *a, int N)
{
    for (int i = 0; i < N - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < N; j++)
        {
            if (a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }
        swap(a[i], a[minIndex]);
        display(a, N);
    }
}

void insertionSort(int *a, int N)
{
    for (int i = 1; i < N; i++)
    {
        // cout << "i " << i << endl;
        for (int j = i; j > 0; j--)
        {
            // cout << "i " << i << " j " << j << endl;
            if (a[j] < a[j - 1])
            {
                swap(a[j], a[j - 1]);
                display(a, N);
                // cout << "Swap " << j << " with " << j - 1 << endl;
            }
        }
    }
}

void display(int *a, int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}