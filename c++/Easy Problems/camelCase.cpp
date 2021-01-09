#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s)
{
    int count = 1;

    if (s.empty())
        return 0;

    for (char &c : s)
    {
        if (isupper(c))
        {
            count++;
        }
    }

    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
