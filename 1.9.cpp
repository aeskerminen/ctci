#include <bits/stdc++.h>
using namespace std;

bool stringrot(string &a, string &b)
{
    map<char, int> m;

    for (int i = 0; i < a.size(); i++)
    {
        m[a[i]]++;
        m[b[i]]++;
    }

    for (const auto &[key, value] : m)
    {
        if (value % 2 != 0)
            return false;
    }

    return true;
}

int main(int argc, char *argv[])
{
    string a = "waterbottle";
    string b = "bottlewater";

    cout << stringrot(a, b) << "\n";

    return 0;
}