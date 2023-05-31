#include <bits/stdc++.h>
using namespace std;

bool oneaway(string &a, string &b)
{
    // a is always longer or equal in size to b
    int count{0};
    int offset{0};
    for (int i = 0; i < a.size(); i++)
    {
        if (i >= b.size())
            break;

        if (a[i + offset] != b[i])
        {
            if (a[i + 1] == b[i])
                offset++;

            count++;
        }
    }

    return count <= 1;
}

int main(int argc, char *argv[])
{
    string a = "pale";
    string b = "bake";

    cout << (oneaway(a, b) ? "one away" : "more away")
         << "\n";

    return 0;
}