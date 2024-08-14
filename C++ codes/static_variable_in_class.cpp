//How to use static variable in classes
#include<iostream>
using namespace std;

//Creating class
class Employee{
    int id;
    //static int count=1000; --->By default is 0.I we want 1000 than this will generate error
    static int count;
    public:
        void set_data(void){
            cout<<"Enter your Id : ";
            cin>>id;
            count++;
        }
        void get_data(void){
            cout<<"The id of this employee is  : "<<id<<" This is employee number :"<<count;
            }
        
        static void getCount(void){
            cout<<"The value of count is :"<<count<<endl;
        }
            

};

//This will not generate error
int Employee :: count=1000;
//Static varibale #Note:By  default initial value of static varibale is 0
//Count is the static data member of class employee


int main(){
    Employee carry,harry,john;
    carry.set_data();
    carry.get_data();
    Employee::getCount();
    cout<<endl;
    

    harry.set_data();
    harry.get_data();
    Employee::getCount();
    cout<<endl;
    
    john.set_data();
    john.get_data();
    Employee::getCount();
    return 0;
}