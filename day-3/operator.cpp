#include<iostream>
using namespace std;

int main(){
    // Arithtmetic operator
    // int a = 5, b = 3;
    // cout<<"+ : " << (a + b) <<endl;  // 8
    // cout<<"- : " << (a - b) <<endl;  // 2
    // cout<<"* : " << (a * b) <<endl;  // 15
    // cout<<"/ : " << (a / b) <<endl;  // 1
    // cout<<"% : " << (a % b) <<endl;  // 2

    //unnary operator

    int a = 3;
    // a = a + 1; //a++
    // a = a - 1; //a--
    a++; //4
    cout<<"a = " <<a <<endl;
    a--; // 3
    cout<<"a = " <<a <<endl;

    int b = ++a;
    cout<<"b = "<<b<<endl;

// Assignment operator
    int c = 10;
    c += 5;
    cout<<c <<endl;
    c -= 5;
    cout<<c<<endl;
    c *= 5;
    cout<<c<<endl;
    c /= 5;
    cout<<c<<endl;

//Relational operator

    int x = 3;
    int y = 5;

    // cout<< (x >= y) << endl; // False --> 0
    // cout<< (x <= y) << endl; // True --> 1
    cout<< (x == y) << endl; // True --> 1
    cout<< (x != y) << endl; // false --> 0

//Logical operator

    cout<< ((3 < 5) && (10 > 5)) <<endl;

    return 0;
}