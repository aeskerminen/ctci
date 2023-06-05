#include <bits/stdc++.h>
using namespace std;

typedef struct node
{
    node *next;
    int val;

    node(int _val)
    {
        next = nullptr;
        val = _val;
    }
} node;

int main(int argc, char *argv[])
{
    node *head = new node(2);
    head->next = new node(1);
    head->next->next = new node(2);
    head->next->next->next = new node(4);

    node *temp = head;
    node *prev = nullptr;

    set<int> s;
    while (temp != nullptr)
    {
        int val = temp->val;

        if (s.find(val) == s.end())
        {
            s.insert(val);
            prev = temp;
        }
        else
        {
            prev->next = temp->next;
            delete (temp);
        }

        temp = prev->next;
    }

    while (head != nullptr)
    {
        cout << head->val << " ";
        head = head->next;
    }

    cout << "\n";

    return 0;
}