#include <iostream>
using namespace std;

int main()
{
    // integer
    int a = 10;

    // character
    char c = 'a';

    // double
    double dVal = 11.5;

    /* ==============  POINTERS* ============== */
    // pointer to an integer (int pointer)
    int* b;

    // pointer to a character (char pointer)
    char* ptrChar = &c;

    // pointer to a double (double pointer)
    double* d;

    d = &dVal;
    cout << "*d = " << *d << "\t\t\t\t derefereced address of dval" << endl;
    cout << "&dVal = " << &dVal << "\t\t address of dVal" << endl;
    cout << "&d = " << &d << "\t\t\t address of pointer d (itself)" << endl;
    cout << "d = " << d << "\t\t\t pointer to address dVal" << endl;
    /* ======================================== */

    return 0;
}
