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
    node *head = new node(7);
    head->next = new node(1);
    head->next->next = new node(6);

    node *head2 = new node(5);
    head2->next = new node(9);
    head2->next->next = new node(2);

    node *sumhead = new node(0);
    node *tsumhead = sumhead;

    int osum{0};
    int tsum{0};

    stack<int> s;

    while (head != nullptr)
    {
        s.push(head->val);
        head = head->next;
    }

    while (!s.empty())
    {
        osum *= 10;
        osum += s.top();
        s.pop();
    }

    while (head2 != nullptr)
    {
        s.push(head2->val);
        head2 = head2->next;
    }

    while (!s.empty())
    {
        tsum *= 10;
        tsum += s.top();
        s.pop();
    }

    int total = osum + tsum;

    cout << osum << " / " << tsum << " / " << total << "\n";

    sumhead->val = total % 10;
    total /= 10;

    while (total != 0)
    {
        sumhead->next = new node(total % 10);
        total /= 10;

        sumhead = sumhead->next;
    }

    while (tsumhead != nullptr)
    {
        cout << tsumhead->val << " / ";
        tsumhead = tsumhead->next;
    }

    return 0;
}