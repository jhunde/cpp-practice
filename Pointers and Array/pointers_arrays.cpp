#include <iostream>
using namespace std;

int main()
{
    // initialize an array
    int arr[] = {2, 4, 5, 8, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = %d \n", i, arr[i]);
        // cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    cout << "sizeof(arr) = " << sizeof(arr) << endl;
    cout << "sizeof(arr) / sizeof(arr[0]) = " << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << endl;

    printf("arr = %d \t(address of arr - address of first element)\n", arr);
    printf("*arr = %d \t\t(dereference address of arr and retrieve arr[0])\n", *arr);
    printf("arr[%d] = %d \t\t(value of the first element in arr)\n", 0, arr[0]);

    printf("\narr + 1 = %d \t\t(address of the second element)\n", arr + 1);
    printf("*arr + 1 = %d \t\t\t(value of the second element)", *arr + 1);

    return 0;
}