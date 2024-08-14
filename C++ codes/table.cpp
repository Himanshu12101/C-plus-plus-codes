//Program to print table
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter Number to print its table : ";
    int num;
    int i=1;
    cin>>num;
    for(int num1=num;i<11;i++){
        cout<<num1<<"*"<<i<<"="<<num*i<<endl;
    }

    return 0;
}