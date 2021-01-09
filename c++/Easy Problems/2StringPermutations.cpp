// C++ program to sort a string of characters 
#include<bits/stdc++.h> 
using namespace std; 

const int MAX_CHAR = 26; 

// function to print string in sorted order 
bool sortString(string &str1, string &str2) 
{ 
  	bool state;
  
  	if(str1.size()!=str2.size())
    {
    	return false; 
    }
	// Hash array to keep count of characters. 
	// Initially count of all charters is 
	// initialized to zero. 
	int charCount1[MAX_CHAR] = {0}; 
	int charCount2[MAX_CHAR] = {0};
	// Traverse string and increment 
	// count of characters 
	for (int i=0; i<str1.length(); i++) 
    {
        // 'a'-'a' will be 0, 'b'-'a' will be 1, 
		// so for location of character in count 
		// array we wil do str[i]-'a'. 
		charCount1[str1[i]-'a']++;
		charCount2[str2[i]-'a']++;
    }

	 
		
	
	// Traverse the hash array and print 
	// characters 
    for(int i=0; i<MAX_CHAR; i++)
    {
        if(charCount1[i]!=charCount2[i])
            return false;
    }

    return true;
} 

// Driver program to test above function 
int main() 
{ 
	string s1 = "21231241fege";	 
  	string s2 = "21231241fgee";
    
    string result = sortString(s1,s2) ? "True" : "False";
	cout<<result<<endl;
    return 0;	 
} 
