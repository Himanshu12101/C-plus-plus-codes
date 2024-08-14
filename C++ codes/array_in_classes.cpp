//How to use array and memory allocation in classes

#include<iostream>
using namespace std;

class shop{
    int item_id[10];
    int item_price[10];
    int counter;
    public:
        void init_counter(void) {counter=0;}
        void set_price(void);
        void display_price(void);

};

void shop :: set_price(void){
    cout<<"Enter id of your item number "<<counter+1<<" : ";
    cin>>item_id[counter];
    cout<<"Enter price of your item number "<<counter+1<<" : ";
    cin>>item_price[counter];
    counter++;

}

void shop :: display_price(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of item number with item id :"<<item_id[i]<<" is : "<<item_price[i]<<endl;
    }
    
}

int main(){
    shop market;
    market.init_counter();
    market.set_price();
    market.set_price();
    market.set_price();
    market.display_price();
    return 0;
}