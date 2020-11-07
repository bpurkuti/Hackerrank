#include <bits/stdc++.h>

using namespace std;

int maxSumHourGlass(vector<vector<int>> arr){
    int max=INT_MIN;
    int currmax=0;
    
    for(int i=0; i<arr.size()-2;i++)
    {
        
        for(int j=1; j<arr.size()-1;j++)
        {
            currmax+=arr[i][j-1];
            currmax+=arr[i][j];
            currmax+=arr[i][j+1];
            currmax+=arr[i+1][j];
            currmax+=arr[i+2][j-1];
            currmax+=arr[i+2][j];
            currmax+=arr[i+2][j+1];

            if(currmax>max)
            {
                max=currmax;
            }
            
            currmax=0;
        }
    }

    return max;
}

int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    cout<< maxSumHourGlass(arr)<<endl;
    return 0;
}
