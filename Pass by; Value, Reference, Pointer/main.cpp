#include <iostream>
using namespace std;

void passByValue(int num)
{
    num = 20;
    cout << "passByValue: " << num << endl;
    cout << "&num: " << &num << "\t\thas it's own address" << endl;
}
void passByReference(int &num)
{
    num = 40;
    cout << "\npassByReference: " << num << endl;
    cout << "&num: " << &num << "\t\tsame address as x" << endl;
}
void passByPointer(int *num)
{
    *num = 60;
    cout << "\npassByPointer: " << *num << endl;
    cout << "num: " << num << "\t\taddress of x passed into the function" << endl;
    cout << "&num: " << &num << "\t\tit's own address (💡maybe the same as &num in passByValue - because the stack frame maybe reusing the same memory of the parameter function)" << endl;
}

int main()
{

    int x = 10;
    printf("Original value (x): %d\n", x);
    cout << "&x: " << &x << endl
         << endl;
    passByValue(x);
    passByReference(x);
    passByPointer(&x);

    printf("\nCheck if the orignal (x) is update: %d", x);
    return 0;
}