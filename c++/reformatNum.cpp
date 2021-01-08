#import <iostream>;
using namespace std;

class Solution {
public:
    string reformatNumber(string number) {
        string str= "";
        string temp= "";
        int counter = 0;
        bool mode = false;
        
        for(int i=0; i< number.size(); i++)
        {
            if(number[i] == ' ' || number[i]=='-')
            {
            
            }
            else
            {
                str+=number[i];
            }
        }
        if(str.size()==4)
        {
            mode=true;
        }
        
        if(str.size()>3){
            for(int i=0; i< str.size(); i++)
            {   
                if(mode)
                {
                    counter++;
                    temp+=str[i];
                    if(counter%2==0)
                    {
                        if(i!=str.size()-1)
                        {
                            temp+='-';

                        }
                    } 
                }
                else
                {
                    counter++;
                    temp+=str[i];
                    if(counter%3==0)
                    {
                        if(i!=str.size()-1)
                        {
                            temp+='-';
                            if(str.size()-counter == 4)
                            {
                                mode=true;
                                counter=0;
                            }

                        }
                    }                
                }
                

            }
            return temp;
        }
        else
        {
             return str;
        }
        
       
    }
};

// TestCases
// "1-23-45 6"
// "123 4-567"
// "123 4-5678"
// "12"
// "--17-5 229 35-39475 "