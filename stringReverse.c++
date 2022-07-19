#include <iostream>
using namespace std;

int main()
{

    printf("Enter letters up to ten\n");
    printf("The string will be reversed. End your string with a dot.\n");

    int MAX_SIZE = 10;
    char arr[MAX_SIZE], next;
    int index = 0;
    printf("Enter the first letter\n");
    cin >> next;
    while ((next != '.') && (index < MAX_SIZE))
    {
        cin >> next;
        arr[index] = next;
        index++;
    }
    int numberUsed = index;
    printf("The reversed output of the strings are\n");
    for (index = numberUsed - 1; index >= 0; index--)
    {
        cout << arr[index];
    }
}

// this method is more elaborate than the assignment file . this sam apprroach can be used to reverse integers by changing 
// char arr[MAX_SIZE], next; to  int arr[MAX_SIZE], next;
