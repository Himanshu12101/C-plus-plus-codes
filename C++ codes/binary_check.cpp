//Binary check and ones compliment using class
#include<iostream>
#include <string>
#include <stdlib.h>
using namespace std;

//Creating a binary class
class binary{
    //private: ----->By default everthing in classes are private
    string s;
    public:
        void input_bin(void);
        void check_bin(void);
        void ones_compliment(void);
        void print_bin(void);
};

//Taking input of binary numer
void binary::input_bin(void){
    cout<<"Enter a binary number :";
    cin>>s;
    //cout<<endl;
}

//Checking of binary numer
void binary::check_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
    
}

//Complimating of binary numer
void binary :: ones_compliment(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='1'){
            s.at(i)='0';
        }
        else{
            s.at(i)='1';
        }
        
    }
    
}

//Printing complimented binary number
void binary :: print_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
}

int main(){
    binary b;
    b.input_bin();
    b.check_bin();
    b.ones_compliment();
    b.print_bin();
    return 0;
}