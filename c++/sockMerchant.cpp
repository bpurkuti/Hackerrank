#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the sockMerchant function below.

int sockMerchant(int n, vector<int> arr) {
    int match = 0;
    bool contains;
    vector<int> temp;
    
    for(int i=0; i<arr.size()-1; i++)
    {
        contains  = false;
        for(int k=0; k<temp.size(); k++)
        {
            if(arr[i]==temp[k])
            {
                contains = true;
                break;
            }
        }
        
        int count=1;
        if(contains==false){
            for(int j=i+1; j<arr.size(); j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                }
            }
            temp.push_back(arr[i]);
            if(count>=2)
            {
                match+=(count%2==0) ? count/2 : (count-1)/2;

            }
        }

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
    int result = sockMerchant(n, ar);
    cout<<result<<endl;
}

// int main()
// {
//     ofstream fout(getenv("OUTPUT_PATH"));

//     int n;
//     cin >> n;
//     cin.ignore(numeric_limits<streamsize>::max(), '\n');

//     string ar_temp_temp;
//     getline(cin, ar_temp_temp);

//     vector<string> ar_temp = split_string(ar_temp_temp);

//     vector<int> ar(n);

//     for (int i = 0; i < n; i++) {
//         int ar_item = stoi(ar_temp[i]);

//         ar[i] = ar_item;
//     }

//     int result = sockMerchant(n, ar);

//     fout << result << "\n";

//     fout.close();

//     return 0;
// }

// vector<string> split_string(string input_string) {
//     string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
//         return x == y and x == ' ';
//     });

//     input_string.erase(new_end, input_string.end());

//     while (input_string[input_string.length() - 1] == ' ') {
//         input_string.pop_back();
//     }

//     vector<string> splits;
//     char delimiter = ' ';

//     size_t i = 0;
//     size_t pos = input_string.find(delimiter);

//     while (pos != string::npos) {
//         splits.push_back(input_string.substr(i, pos - i));

//         i = pos + 1;
//         pos = input_string.find(delimiter, i);
//     }

//     splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

//     return splits;
// }
