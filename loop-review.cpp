#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string evenOddSep(string x)
{
    string even="";
    string odd="";
    for(int i=0; i<x.size(); i++)
    {
        if(i%2==0)
        {
            even+=x[i];
        }
        else
        {
            odd+=x[i];
        }
    }
    
    return even+" "+odd;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n;
    cin>>n;
    
    string s;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        cout<<evenOddSep(s)<<endl;
    }
    // string s;
    // cin>>s;
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    
    return 0;
}