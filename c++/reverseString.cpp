//Reverse all words in a sentence
//However, keep the order of the words
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// string reverseString(string str){
//     string temp="";
//     for(int i=str.size()-1; i>=0; i--)
//     {
//         temp+=str[i];
//     }

//     return temp;
// }

// int main()
// {
//     string str = "Harry is a good boy";

//     istringstream ss(str);
//     string word;
//     string newstr;
//     while(ss>>word)
//     {
//         newstr+=reverseString(word);
//         newstr+=" ";
//     }


//     cout<<newstr<<endl;
//     return 0;
// }


string reverseString(string str)
{
    stack<char> s;
    string result;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]!= ' ')
        {
            s.push(str[i]);
        }
        else
        {
            while(!s.empty())
            {
                result+=s.top();
                s.pop();
            }
            result+=" ";
        }
        
    }

    return result;
}

int main(){
    string str = "Harry is a good boy";

    cout<<reverseString(str)<<endl;
    return 0;
}