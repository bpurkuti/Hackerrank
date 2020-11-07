#include <iostream>
using namespace std;

int a = 1;
int *b = &a;
int **c = &b;

void print(){
    cout<<"a: " <<a<<endl;
    cout<<"b: " <<b<<endl;
    cout<<"c: " <<c<<endl;

    cout<<"*b: " <<*b<<endl;
    cout<<"*c: " <<*c<<endl;
    cout<<"**b: " <<**c<<endl;


}
int main()
{
    print();

    a = 2;
    *b = 3;
    print();

    return 0;
}