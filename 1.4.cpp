#include <bits/stdc++.h>
using namespace std;

bool palperm(string &s)
{
    map<char, int> m;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            if (m.find(s[i]) == m.end())
                m[s[i]] = 1;
            else
                m[s[i]]++;
        }
    }

    int count{0};
    for (const auto &[key, value] : m)
    {
        if (value & 1)
            count++;

        if (count > 1)
            return false;
    }

    return true;
}

int main(int argc, char *argv[])
{
    string s = "tact";
    cout << palperm(s) << "\n";

    return 0;
}