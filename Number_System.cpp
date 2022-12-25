#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int num;
    cout << "Enter 1 for DECIMAL to BINARY conversion" << endl;
    cout << "Enter 2 for DECIMAL to OCTAL conversion" << endl;
    cout << "(BUG)Enter 3 for DECIMAL to HEXADECIMAL conversion " << endl;
    cout << "Enter 4 for BINARY to DECIAML conversion" << endl;
    cout << "*Enter 5 for BINARY to OCTAL conversion" << endl;
    cout << "*Enter 6 for BINARY to HEXADECIMAL conversion" << endl;
    cout << "Enter 7 for OCTAL to DECIAML conversion" << endl;
    cout << "*Enter 8 for OCTAL to BINARY conversion" << endl;
    cout << "Enter 9 for HEXADECIMAL to DECIAML conversion" << endl;
    cout << "*Enter 10 for HEXADECIMAL to BINARY conversion" << endl;
    cin >> num;

    switch (num)
    {
    case 1:
        // DECIMAL to BINARY

        // --------------------------------

        {
            int n;
            cout << "Enter Your DECIMAL number to convert in BINARY" << endl;
            cin >> n;

            int i = 0;
            int ans = 0;

            while (n != 0)
            {

                int digit = n % 2;

                ans = (digit * pow(10, i)) + ans;

                n = n / 2;
                i++;
            }
            cout << "Answer :-" << ans << endl;
        }
        // --------------------------------

        break;

        // DECIMAL to octal

    case 2:
    {
        int n;
        cout << "Enter Your DECIMAL number to convert in OCTAL" << endl;
        cin >> n;

        int i = 0;
        int ans = 0;

        while (n != 0)
        {

            int digit = n % 8;

            ans = (digit * pow(10, i)) + ans;

            n = n / 8;
            i++;
        }
        cout << "Answer :-" << ans << endl;
    }
    break;
        // DECIMAL to HEXADECIMAL
    case 3:
    {
        int n;
        cout << "Enter Your DECIMAL number to convert in HEXADECIMAL" << endl;
        cin >> n;
        // problem in A B C D value
        int i = 0;
        int ans = 0;

        while (n != 0)
        {

            int digit = n % 16;

            ans = (digit * pow(10, i)) + ans;

            n = n / 16;
            i++;
        }
        cout << "Answer :-" << ans << endl;
    }
    break;
    // BINARY to DECIMAL
    case 4:
    {
        int n;
        cout << "Enter Your BINARY number to convert in DECIMAL number" << endl;
        cin >> n;
        int ans = 0;
        int i = 0;

        while (n != 0)
        {

            int digit = n % 10;

            ans = (digit * pow(2, i)) + ans;

            n = n / 10;
            i++;
        }

        cout << "answer :-" << ans << endl;
    }
    break;
    // Binary to octal
    case 5:
    {
        cout << "Nahi karunga , jo karna hai kar loo" << endl;
    }
    break;
    // BINARY to HEXADECIMAL
    case 6:
    {
        cout << "Nahi karunga , jo karna hai kar loo" << endl;
    }
    break;
    // OCTAL to DECIAML
    case 7:
    {
        int n;
        cout << "Enter Your OCTAL number to convert in DECIMAL number" << endl;
        cin >> n;
        int ans = 0;
        int i = 0;

        while (n != 0)
        {

            int digit = n % 10;

            ans = (digit * pow(8, i)) + ans;

            n = n / 10;
            i++;
        }

        cout << "answer :-" << ans << endl;
    }
    break;
    // OCTAL to BINARY
    case 8:
    {
        cout << "Nahi karunga , jo karna hai kar loo" << endl;
    }
    break;
    // HEXADECIMAL to DECIAML
    case 9:
    {
        {
            int n;
            cout << "Enter Your HEXADECIMAL number to convert in DECIMAL number" << endl;
            cin >> n;
            int ans = 0;
            int i = 0;

            while (n != 0)
            {

                int digit = n % 10;

                ans = (digit * pow(16, i)) + ans;

                n = n / 10;
                i++;
            }

            cout << "answer :-" << ans << endl;
        }
    }
    break;
// HEXA to BINARY
    case 10:
    {
        cout << "Nahi karunga , jo karna hai kar loo" << endl;
    }
    break;

    default:
        cout << "Invalid Number , Please check Your Number" << endl;
        break;
    }
}