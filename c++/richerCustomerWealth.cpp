#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max= 0;
        int currMax;
        
        for(int i = 0; i<accounts.size(); i++){
            currMax = 0;
            
            for(int j=0; j<accounts[i].size(); j++)
            {
                currMax+=accounts[i][j];
            }
            
            if(currMax>max)
            {
                max = currMax;
            }
        }
        
        return max;
        
    }
};


int main()
{
    Solution soln;
    vector<int> a = {1,2,3};
    vector<int> b = {3,2,1};
    vector<vector<int>> accounts = {a,b};

    cout<<soln.maximumWealth(accounts)<<endl;
    return 0;
    
}