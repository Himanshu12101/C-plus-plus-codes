//How to make array of object 
#include<iostream>
using namespace std;

//creating class
class Employee{
    int id;
    int salary;
    public:
        void set_id(void){
            salary=1000;
            cout<<"Enter your id :"<<endl;
            cin>>id;
        }
        void get_id(void){
            cout<<"The id of employee is : "<<id<<endl;
        }
};

int main(){
    Employee fb[5];
    for (int i = 0; i < 5; i++)
    {
        fb[i].set_id();
        fb[i].get_id();
    }
    
    return 0;
}