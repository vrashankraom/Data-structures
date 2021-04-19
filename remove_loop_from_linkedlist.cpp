/*
You are given a linked list of N nodes. Remove the loop from the linked list, if present. 
Note: X is the position of the node to which the last node is connected to. If it is 0, then there is no loop.
*/


#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node *head, Node *tail, int position)
{
    if (position == 0)
        return;

    Node *walk = head;
    for (int i = 1; i < position; i++)
        walk = walk->next;
    tail->next = walk;
}

bool isLoop(Node *head)
{
    if (!head)
        return false;

    Node *fast = head->next;
    Node *slow = head;

    while (fast != slow)
    {
        if (!fast || !fast->next)
            return false;
        fast = fast->next->next;
        slow = slow->next;
    }

    return true;
}

int length(Node *head)
{
    int ret = 0;
    while (head)
    {
        ret++;
        head = head->next;
    }
    return ret;
}

void removeLoop(Node *head);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, num;
        cin >> n;

        Node *head, *tail;
        cin >> num;
        head = tail = new Node(num);

        for (int i = 0; i < n - 1; i++)
        {
            cin >> num;
            tail->next = new Node(num);
            tail = tail->next;
        }

        int pos;
        cin >> pos;
        loopHere(head, tail, pos);

        removeLoop(head);

        if (isLoop(head) || length(head) != n)
            cout << "0\n";
        else
            cout << "1\n";
    }
    return 0;
}


void removeLoop(Node *head)
{
  
    Node *p = head;
    Node *q = head;
    do
    {
        p = p->next;
        q = q->next;
        if (q->next != NULL)
            q = q->next;
    } while (p != NULL && q->next != NULL && p != q);
    if (q == NULL)
        return;
    if (p == q)
    {
        if (q == q->next)
        {
            q->next = NULL;
            return;
        }
        Node *temp = q;
        int size = 1;
        while (temp->next != q)
        {
            size++;
            temp = temp->next;
        }

        int size1 = size;
        Node *s = head;
        while (size > 1)
        {
            s = s->next;
            size--;
        }
        Node *first = head;
        do
        {
            s = s->next;
            if (s != first)
                first = first->next;
        } while (s && first && s != first);
        while (size1 > 1)
        {
            s = s->next;
            size1--;
        }

        s->next = NULL;
    }
    else
        return;
}
