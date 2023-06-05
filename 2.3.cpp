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
    node *todelete = new node(3);
    node *head = new node(2);

    head->next = new node(1);
    head->next->next = new node(2);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);
    head->next->next->next->next->next = todelete;
    head->next->next->next->next->next->next = new node(8);
    head->next->next->next->next->next->next->next = new node(13);
    head->next->next->next->next->next->next->next->next = new node(11);
    head->next->next->next->next->next->next->next->next->next = new node(10);
    head->next->next->next->next->next->next->next->next->next->next = new node(17);

    node *temp = head;

    if (temp == todelete)
        head = head->next;
    else
    {
        node *prev = temp;
        temp = temp->next;
        while (temp != nullptr)
        {
            if (temp == todelete)
            {
                prev->next = temp->next;
                delete (temp);
                break;
            }

            prev = temp;
            temp = temp->next;
        }
    }

    while (head != nullptr)
    {
        cout << head->val << " / ";
        head = head->next;
    }

    return 0;
}