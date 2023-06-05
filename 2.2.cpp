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
    head->next->next->next->next = new node(5);
    head->next->next->next->next->next = new node(3);
    head->next->next->next->next->next->next = new node(8);
    head->next->next->next->next->next->next->next = new node(13);
    head->next->next->next->next->next->next->next->next = new node(11);
    head->next->next->next->next->next->next->next->next->next = new node(10);
    head->next->next->next->next->next->next->next->next->next->next = new node(17);

    int k = 2;

    node *temp = head;
    int len{0};

    while (temp != nullptr)
    {
        temp = temp->next;
        len++;
    }

    while (len - k > 0)
    {
        head = head->next;
        len--;
    }

    cout << head->val << "\n";

    return 0;
}