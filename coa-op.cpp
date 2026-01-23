#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter 1st binary digit (0 or 1):" << endl;
    cin >> a;

    cout << "Enter 2nd binary digit (0 or 1):" << endl;
    cin >> b;

    cout << "1. AND OPERATION" << endl;
    cout << "2. NAND OPERATION" << endl;
    cout << "3. OR OPERATION" << endl;
    cout << "4. NOR OPERATION" << endl;
    cout << "5. XOR OPERATION" << endl;
    cout << "6. XNOR OPERATION" << endl;

    char choice;
    cin >> choice;

    switch (choice)
    {
        case '1':
            cout << (a & b) << endl;
            break;

        case '2':
            cout << !(a & b) << endl;
            break;

        case '3':
            cout << (a | b) << endl;
            break;

        case '4':
            cout << !(a | b) << endl;
            break;

        case '5':
            cout << (a ^ b) << endl;
            break;

        case '6':
            cout << !(a ^ b) << endl;
            break;

        default:
            cout << "Please enter a valid choice" << endl;
    }

    return 0;
}
