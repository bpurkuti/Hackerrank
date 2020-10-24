#include <bits/stdc++.h>

using namespace std;


/*
 * Complete the 'decryptPassword' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

int findlastzero(string s)
{
    for(int i=s.size(); i>0; i++)
    {
        if(s[i]=='0')
        {
            return i;
        }
    }
    
    return 0;
}

string decryptPassword(string s) {
    string str, newstr;
    for(int i=0; i< s.size(); i++)
    {
        if(isupper(s[i]) && islower(s[i+1]))
        {
            swap(s[i],s[i+1]);
            str+=s[i];
            str+=s[i+1];
            
        }
        else if(isdigit(s[i]) && s[i]!=0)
        {
            int j=findlastzero(s);
            cout<<j<<endl;
            
            if(j!=0)
            {
                swap(s[i],s[j]);
                s[i]='*';
            }
            
            cout<<s<<endl;
            
            
            
        }
        else if(s[i]!='0' && s[i]!='*')
        {
            str+=s[i];
        }
        
        
    }
    
    return str;
}
int main()