#include<iostream>
using namespace std;

inline int product(int a,int b){
    return a*b;
}

int main(){
    int a,b;
    cout<<"Enter value of  a :";
    cin>>a;
    cout<<"Enter value of b :";
    cin>>b;
    cout<<"Product is :"<<product(a,b);
    return 0;
}