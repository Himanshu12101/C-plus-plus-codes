#include<iostream>
using namespace std;

//Function prototype 
//syntax for function prototype
//function_name(argument);

int sum(int a,int b); 
int main(){
    int num1,num2;
    cout<<"Enter first number : ";
    cin>>num1;

    cout<<"Enter second number : ";
    cin>>num2;

    cout<<"The sum is :"<<sum(num1,num2);
    return 0;
}

int sum(int a,int b){
    int c=a+b;
    return c;
}