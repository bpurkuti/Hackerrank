#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int data)
{        
    if(data<=1) return false;
        
    if(data<=3) return true;
    
    if(data%2==0 || data%3==0) return false;
    //Prime numbers with exception of 2 and 3
    //are found by 6k+ or - 1
    //We start from 5 which is 6-1 and increment i by 6 for 6*k affect
    //taking square root of data
    //If a number is divisable by another number less or equal to the square root of the     //first number... it is NOT prime
    for(int i=5; i*i<=data; i+=6)
    {
        //checking 6-1 and 6+1
        if(data%i==0||data%(i+2)==0)
        {
            return false;
        }
    }
    
    return true;
        
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++)
    {   
        int data;
        cin>>data;
        (isPrime(data))? cout<<"Prime"<<endl : cout<<"Not prime"<<endl;
    } 
    return 0;
}
