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

    node *loop = new node(5);

    head->next = new node(1);
    head->next->next = new node(2);
    head->next->next->next = new node(3);
    head->next->next->next->next = new node(4);
    head->next->next->next->next->next = loop;
    head->next->next->next->next->next->next = new node(5);
    head->next->next->next->next->next->next->next = new node(4);
    head->next->next->next->next->next->next->next->next = new node(3);
    head->next->next->next->next->next->next->next->next->next = loop;
    head->next->next->next->next->next->next->next->next->next->next = new node(1);
    head->next->next->next->next->next->next->next->next->next->next->next = new node(2);

    node *slow = head;
    node *fast = head->next->next;

    while (fast != nullptr && fast->next != nullptr)
    {
        if (slow == fast)
        {
            cout << "FOUND LOOP: " << slow->val << "\n";
            break;
        }

        slow = slow->next;
        fast = fast->next->next;
    }

    return 0;
}