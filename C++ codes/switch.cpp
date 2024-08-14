//selection control structure: switch
#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"Your work is to do cleaning";
        break;
    
    case 13:
        cout<<"Your work is to play ps5 games";
        break;

    case 70:
        cout<<"Your work is to rest";
        break;

    default:
        cout<<"Do whatever you want";
        break;
    }
    return 0;
}