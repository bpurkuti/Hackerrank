#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'pilesOfBoxes' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts INTEGER_ARRAY boxesInPiles as parameter.
 */

long pilesOfBoxes(vector<int> boxesInPiles) {
    int totalSteps = 0;
    int curr = 1;
    int prev = 0;
    sort(boxesInPiles.begin(), boxesInPiles.end());
    
    
    int i = boxesInPiles.size()-1;
    while(i>=0)
    {
        cout<<boxesInPiles[i]<<endl;
        if(boxesInPiles[i]==boxesInPiles[i-1])
        {
            curr++;
        }
        else {
            prev=boxesInPiles.size()-i;
            cout<<"Prev: "<<prev<<endl;
            cout<<"Curr: "<<curr<<endl;

            totalSteps+=curr;
            curr=1;
        }
        i--;
    }  
    return totalSteps;
}

int main(){
    vector<int> vec = {5,4,5,5,2,4,2,2,4,1,123,1,2,31,23};

    cout<<pilesOfBoxes(vec)<<endl;
    return 0;
}