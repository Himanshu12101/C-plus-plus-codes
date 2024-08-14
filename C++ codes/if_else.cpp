//if else statement in c++

//selection control structure: if else
#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age :";
    cin>>age;
    if(age<18){
        cout<<"You are not eligible to vote";
    }
    else{
        cout<<"You are eligible to vote";
    }
    return 0;
}