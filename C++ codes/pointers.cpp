//Pointers---->Data types that store address of other dataype
#include<iostream>
using namespace std;

int main(){
    int a=3;
    int* b=&a;
    cout<<"The address of a is"<<b<<endl;
    cout<<"The address of a is"<<&a<<endl;

    cout<<"Value at b is : "<<*b;
    return 0;
}