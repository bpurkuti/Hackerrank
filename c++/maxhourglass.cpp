#include <bits/stdc++.h>

using namespace std;

int maxSumHourGlass(vector<vector<int>> arr){
    int max=INT_MIN;
    int currmax=0;
    
    //i is each row. Since its 6*6 matrix, we can only have hour glass from
    //1st row to 4th row which is 0-3 hence -2
    for(int i=0; i<arr.size()-2;i++)
    {
        //j is columns, we can only have 4 hour glass in a row
        //hence I decided to start the columns from 1-4
        //we determine the body of an hourglass using these bounds
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
