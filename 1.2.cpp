#include <bits/stdc++.h>
using namespace std;

bool isperm(string &a, string &b)
{
    if (a.size() != b.size())
        return false;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
            return false;
    }

    return true;
}

int main(int argc, char *argv[])
{

    string a = "hello";
    string b = "oellh";

    cout << isperm(a, b) << "\n";

    return 0;
}