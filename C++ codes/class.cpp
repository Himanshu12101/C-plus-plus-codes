//Class
#include<iostream>
using namespace std;

class employee{
    private :
        int a,b,c;
    public:
        int d,e;
        void setdata(int a1,int b1,int c1);//Declaration
        void getdata(){
            cout<<"Value of a is "<<a<<endl;
            cout<<"Value of b is "<<b<<endl;
            cout<<"Value of c is "<<c<<endl;
            cout<<"Value of d is "<<d<<endl;
            cout<<"Value of e is "<<e<<endl;
        }
};

void employee :: setdata(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    employee tom;
    //tom.a=10----> This will raise error because a is a private variable
    tom.d=20;
    tom.e=40;
    tom.setdata(10,30,50);
    tom.getdata();
    return 0;
}