#include <iostream>
using namespace std;
#include <bits/stdc++.h>

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
    // print();

    // a = 2;
    // *b = 3;
    // print();

    vector<int> a = {187,470,25,436,538,809,441,167,477,110,275,133,666,345,411,459,490,266,987,965,429,166,809,340,467,318,125,165,809,610,31,585,970,306,42,189,169,743,78,810,70,382,367,490,787,670,476,278,775,673,299,19,893,817,971,458,409,886,434};

    sort(a.begin(), a.end());
    int sum = 0;
    for(int i:a)
    {
        cout<<i<<" ";
        sum+=i;
    }

    cout<<sum-809-809-490;

    return 0;
}