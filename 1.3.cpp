#include <bits/stdc++.h>
using namespace std;

void urlify(string &a)
{
    string r = "%20";

    for (int i = 0; i < a.size(); i++)
        if (a[i] == ' ')
        {
            a.erase(i, 1);
            a.insert(i, r);
            i += 2;
        }
}

int main(int argc, char *argv[])
{
    string a = "Mr JOhn Smith";
    urlify(a);

    cout << a << "\n";

    return 0;
}