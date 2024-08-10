#include<iostream>

using namespace std;

int main(){
    // int age;

    // cout<<"Enter your age : ";
    // cin>>age;

    // if(age >= 18){
    //     cout<<"Can vote "<<endl;
    // } else{
    //     cout<<"cannot vote" <<endl;
    // }

    // int marks;
    // cout<<"Enter Your Marks: ";
    // cin>>marks;

    // if (marks >= 33)
    // {
    //     cout<<"Pass"<<endl;
    // } else{
    //     cout<<"Fail"<<endl;
    // }


    // print largest number

    // int num1, num2;

    // cout<<"Enter 1st Number: ";
    // cin>>num1;
    //  cout<<"Enter 2nd Number: ";
    // cin>>num2;

    // if (num1 > num2){
    //     cout<<"largest number :"<<num1<<endl;
    // }else{
    //     cout<<"largest number :"<<num2<<endl;
    // }


    //odd even number


    // int number;
    // cout<<"Enter  Number: ";
    // cin>>number;

    // if (number % 2 == 0)
    // {
    //     cout<<"Number is Even : "<<number;
    // }else{
    //     cout<<"Number is odd : " <<number;
    // }
    

    // else if

    // int marks = 75;

    // if (marks >=90){
    //     cout<< "A" <<endl;
    // }else if(marks >=80){
    //     cout <<"B" <<endl;
    // }else{
    //     cout <<"C" <<endl;
    // }
    

    //Tax pecentage calculation

    // int income ;
    // float tax;
    // cout<<"Enter Your Yearly Income (in laks): ";
    // cin>>income;

    // if (income <=  5){
    //     cout<<"No need to pay tax"<<endl;
    // }else if(income>= 5 && income<=10){
    //     tax = 0.2 * income;
    // }else{
    //     tax = 0.3 * income;
    // }
    
    // cout<<"Tax = " <<(tax * 100000) <<endl;


    // largest of 3 number

    // int num1, num2, num3;

    // cout<<"Enter 1st Number: ";
    // cin>>num1;
    // cout<<"Enter 2nd Number: ";
    // cin>>num2;
    // cout<<"Enter  3rd Number: ";
    // cin>>num3;
    // if (num1 >= num2 && num1>=num3){
    //    cout<<"Larget number is : "<<num1<<endl;
    // }else if(num2 >= num1 && num2 >=num3){
    //      cout<<"Larget number is : "<<num2<<endl;
    // }else{
    //      cout<<"Larget number is : "<<num3<<endl;
    // }

    bool isAdult;
    int age;
    cout<<"Enter age: ";
    cin>>age;

    isAdult = age >= 18 ? true: false;
       

       // largest of  2 num

       int a = 10;
       int  b = 5;
       int largest = a>=b? a:b;
       cout<<"largest is " <<largest<<endl;
       
    return 0;
}