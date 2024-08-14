//Manipulator: to format output
#include <iostream>
#include <iomanip> //to use setw
using namespace std;
int main(){
    int a=1,b=23,c=4567;
    cout<<"a without setw"<<a<<endl;
    cout<<"b without setw"<<b<<endl;
    cout<<"c without setw"<<c<<endl;

    //using setw
    cout<<"a wit setw"<<setw(4)<<a<<endl;
    cout<<"c wit setw"<<setw(4)<<c<<endl;
    cout<<"c wit setw"<<setw(4)<<c<<endl;
    return 0;
}