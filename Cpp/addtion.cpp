#include<iostream>
using namespace std;

int main(){
    // int a,b,c;

    // cout<<"Enter the Frist Number: "<<endl;
    // cin>>a;
    // cout<<"Enter the secound Number: "<<endl;
    // cin>>b;

    // c = a + b;
    // cout<<"Addition is : "<<c<<endl;


    // print average marks

    float science , maths, english, avg;

    cout<<"Enter Science marks :";
    cin>>science;
    cout<<"Enter maths marks :";
    cin>>maths;
    cout<<"Enter english marks :";
    cin>>english;


    avg = (science + english + maths) / 3;

    cout<<"Your avrage is: "<<avg;

}