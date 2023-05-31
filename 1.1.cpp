#include <bits/stdc++.h>

using namespace std;

bool isunique(string &s)
{
    sort(s.begin(), s.end());

    for (int i = 0; i < s.size() - 1; i++)
        if (s[i] == s[i + 1])
            return false;

    return true;
}

int main(int argc, char *argv[])
{
    string s = "hello";
    string p = "helo";

    cout << isunique(s) << "\n"
         << isunique(p);

    return 0;
}