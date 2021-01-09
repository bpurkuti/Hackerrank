#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the sockMerchant function below.

int sockMerchant(int n, vector<int> arr) {
    int match = 0;
  
  map<int,int> ctr;

  for(int i:arr)
  {
    //This inserts the keyvalue while increases its mapvalue by 1 
    //for each encounter
    ctr[i]++;
    //any time theres even counter of mapvalue, increase pair counter
    if(ctr[i]%2==0)
    {
        match++;
    }
  }

    //how the map looks after
    for(const auto &i:ctr)
    {
        cout<<i.first<< ", "<<i.second<<endl;
    }
    return match;
}

int main()
{
    //vector<int> ar = {1, 2, 1, 2, 1, 3, 2};
    int n;
    cin>>n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++) {
        int ar_item ;
        cin>>ar_item;
        ar[i] = ar_item;
    }
    int result = sockMerchant(ar.size(), ar);
    cout<<result<<endl;
}
