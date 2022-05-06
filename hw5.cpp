#include "main.h"

int main()
{
    srand(time(0));
    int n = 3;
    int m = 2;
    int** arr = new int* [n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }
    fill(arr, n, m);
    printArr(arr, n, m);
}

void fill(int** arr, int n, int m) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = rand() % 41 + 10;
        }
    }
}

void printArr(int** arr, int n, int m) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << setw(2) << arr[i][j]<<" ";
        }
        cout << endl;
    }
}
