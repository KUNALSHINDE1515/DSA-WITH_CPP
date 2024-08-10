#include <iostream>
using namespace std;
int main()
{

    // int day;
    // cout << "Enter day: ";
    // cin >> day;
    // switch (day)
    // {
    // case 1:
    //     cout << "MONDAY";
    //     break;
    // case 2:
    //     cout << "TUESDAY";
    //     break;
    // case 3:
    //     cout << "WEDNESDAY";
    //     break;
    // case 4:
    //     cout << "THURSDAY";
    //     break;
    // case 5:
    //     cout << "FRIDAY";
    //     break;
    // case 6:
    //     cout << "SATURDAY";
    //     break;
    // case 7:
    //     cout << "SUNDAY";
    //     break;
    // default:
    //     cout<<"INVALID DAY";
    //     break;
    // }

    int num1, num2;
    char op;

    cout << "Enter 1st Number : ";
    cin >> num1;
    cout << "Enter 2nd Number : ";
    cin >> num2;
    cout << "Enter Operator : ";
    cin >> op;
    // calculator
    // if (op == '+')
    // {
    //     cout << "ADDTION IS : " << num1 + num2 << endl;
    // }
    // else if (op == '-')
    // {
    //     cout << "SUBSTRACTTION IS : " << num1 - num2 << endl;
    // }
    // else if (op == '*')
    // {
    //     cout << "MULTIPLICATION IS : " << num1 * num2 << endl;
    // }
    // else if (op == '/')
    // {
    //     cout << "DIVISION IS : " << num1 / num2 << endl;
    // }
    // else
    // {
    //     cout << "INVALID CHARATCTER";
    // }

    // switch

    switch (op)
    {
    case '+':
        cout << "ADDTION IS : " << num1 + num2 << endl;
        break;
    case '-':
        cout << "SUBSTRACTTION IS : " << num1 - num2 << endl;
        break;
    case '*':
        cout << "MULTIPLICATION IS : " << num1 * num2 << endl;
        break;
    case '/':
        cout << "DIVISION IS : " << num1 / num2 << endl;
    default:
        cout << "INVALID CHARATCTER";
        break;
    }
    return 0;
}