#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
//found bottom soln online. takes advantage of manipulators. Puts i amount of "#" string on right
//and fills rest with " " space,
//for(i to n){cout << right << setfill(' ') << setw(n) << string(i,'#') << endl;}
void staircase(int n) {
    int row=1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-row; j++)
        {
            cout<<" ";
        }

        for(int k=0; k<row; k++)
        {
            cout<<"#";
        } 
        cout<<endl;

        row++;
    }

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
