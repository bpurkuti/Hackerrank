#include <bits/stdc++.h>

using namespace std;

string convertToBinary(int x)
{
    string s;
    while(x!=0)
    {
        if(x%2==0)
        {
            s+='0';
            x=x/2;
        }
        else if(x%2==1)
        {
            s+='1';
            x--;
            x=x/2;
        }
    }
    return s;
}

int findconsecutiveOne(string s)
{
    int max=0;
    int maxnow=0;
    for(int i=0; i<s.size();i++)
    {
        if(s[i]=='1')
        {
            maxnow++;
        }
        else
        {
            maxnow=0;
        }
        
        if(maxnow>max)
        {
            max=maxnow;
        }
    }
    return max;
} 


int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<findconsecutiveOne(convertToBinary(n))<<endl;

    return 0;
}
