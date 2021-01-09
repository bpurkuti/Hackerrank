#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n;
    cin >>n;
    map<string,int> m;

    for(int i=0; i<n; i++)
    {
        int x=0;
        string s="";
        cin>>s>>x;

        m[s] = x;
    }

    string s;
    while(cin>>s)
    {
        if(m.find(s)==m.end())
        {
            cout<<"Not found"<<endl;
        }
        else
        {
            cout<<m.find(s)->first<<"="<<m.find(s)->second<<endl;
        }
    }


    return 0;
}