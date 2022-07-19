#include <iostream>
using namespace std;

int main()
{
    int n = 9;
    int a[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int temp;
    for (int i = 0; i < (n / 2); i++)
    {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << a[i] << " ";
    }
}