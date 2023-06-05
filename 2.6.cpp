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
    node *temp = head;

    head->next = new node(1);
    head->next->next = new node(2);
    head->next->next->next = new node(3);
    head->next->next->next->next = new node(4);
    head->next->next->next->next->next = new node(5);
    head->next->next->next->next->next->next = new node(5);
    head->next->next->next->next->next->next->next = new node(4);
    head->next->next->next->next->next->next->next->next = new node(3);
    head->next->next->next->next->next->next->next->next->next = new node(2);
    head->next->next->next->next->next->next->next->next->next->next = new node(1);
    head->next->next->next->next->next->next->next->next->next->next->next = new node(2);

    vector<int> v;

    while (head != nullptr)
    {
        v.push_back(head->val);
        head = head->next;
    }

    bool pal = true;
    for (int i = 0; pal && (i < v.size() / 2); i++)
    {
        if (v[i] != v[v.size() - i - 1])
            pal = false;
    }

    cout << (pal ? "PALINDROME" : "NOT PALINDROME");

    return 0;
}