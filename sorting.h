void parse(int argc, char *argv[], int *output[]);
void swap(int &a, int &b);
void bubbleSort(int *a, int N);
void display(int *a, int N);

void parse(int argc, char *argv[], int output[])
{
    for (int i = 1; i < argc; i++)
    {
        output[i - 1] = atoi(argv[i]);
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