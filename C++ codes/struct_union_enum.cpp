#include<iostream>
using namespace std;

//Structure
typedef struct employee
{
    int eid;
    char favchar;
    float salary;
}ep;

//Union
union cars
{
    int rent;
    char name;
    float weight;
};

int main(){

    //enum example
    enum meal{breakfast,lunch,dinner};
    meal m1=breakfast;
    cout<<m1<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    //Union example
    union cars car1;
    car1.rent=100000;
    cout<<"Rent of Car1 is : "<<car1.rent<<endl;
    
    //Struct example
    ep tom;
    tom.eid=1;
    tom.favchar='t';
    tom.salary=10;
    cout<<"Tom id is : "<<tom.eid<<endl;
    cout<<"Tom fav char is : "<<tom.favchar<<endl;
    cout<<"Tom salary is : "<<tom.salary<<endl;
    return 0;
}