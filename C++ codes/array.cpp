#include<iostream>
using namespace std;

int main(){
    //Method 1
    int marks[]={20,30,99,87};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    //Method 2
    int csmarks[4];
    csmarks[0]=90;
    csmarks[1]=80;
    csmarks[2]=70;
    csmarks[3]=50;

    //Changing value
    csmarks[2]=89;

    cout<<"Computer science marks are shown below:"<<endl;
    cout<<csmarks[0]<<endl;
    cout<<csmarks[1]<<endl;
    cout<<csmarks[2]<<endl;
    cout<<csmarks[3]<<endl;

    //printing array elements using for loop
    cout<<"Marks using for loop are printed below"<<endl;
    for ( int i = 0; i < 4; i++)
    {
        cout<<marks[i]<<endl;
    }
    
    //printing array elements using while loop
    int times=0;
    cout<<"Marks using while loop are printed below"<<endl;
    while(times<4)
    {
        cout<<marks[times]<<endl;
        times++;
    }
    
    //Pointer and array
    int* p = marks;
    cout<<"The value of marks *p is :"<<*p<<endl;
    cout<<"The value of marks *(p+1) is :"<<*(p+1)<<endl;

    return 0;
}