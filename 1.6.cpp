#include <bits/stdc++.h>
using namespace std;

string compress(string &a)
{
    string out = "";

    char cur = a[0];
    int count{0};
    for (int i = 0; i < a.size(); i++)
    {
        if (cur == a[i])
            count++;
        else
        {
            out += cur + to_string(count);
            cur = a[i];
            count = 1;
        }
    }

    out += cur + to_string(count);

    return out;
}

int main(int argc, char *argv[])
{
    string a = "aabcccccaaa";

    string out = compress(a);

    cout << out << "\n";

    return 0;
}