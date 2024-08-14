//Recursive function

//Factorial 
#include<iostream>
using namespace std;

int factorial(int a){
    if(a<=1){
        return 1;
    }
    return a*factorial(a-1);
}


int main(){
    cout<<"Enter a number : ";
    int num;
    cin>>num;
    cout<<"Factorial of "<<num<<" is "<<factorial(num);
    return 0;
}