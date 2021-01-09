#include <iostream>
#include <stack>
#include <queue>


using namespace std;

class Solution {
    //Write your code here
    public:
    stack<char> s;
    queue<char> q;
    void pushCharacter(char ch){
        s.push(ch);
    }

    void enqueueCharacter(char ch){
        q.push(ch);
    }
    
    char popCharacter(){
        char temp = s.top();
        s.pop(); 
        return temp;
    }
    
    char dequeueCharacter(){
        char temp = q.front();
        q.pop(); 
        return temp;
    }
};

int main() {