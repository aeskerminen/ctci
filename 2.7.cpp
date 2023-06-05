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
    node *intersect = new node(4);

    node *head = new node(2);

    head->next = new node(1);
    head->next->next = new node(2);
    head->next->next->next = new node(3);
    head->next->next->next->next = intersect;
    head->next->next->next->next->next = new node(5);

    node *thead = new node(2);

    thead->next = new node(1);
    thead->next->next = intersect;
    thead->next->next->next = new node(3);
    thead->next->next->next->next = new node(4);
    thead->next->next->next->next->next = new node(5);

    while (head != nullptr)
    {

        node *temp = thead;
        while (temp != nullptr)
        {
            if (head == temp)
            {
                cout << "INTERSECTION: " << head->val << "\n";
                head = nullptr;
            }
            temp = temp->next;
        }

        head = head->next;
    }

    return 0;
}