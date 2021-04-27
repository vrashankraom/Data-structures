/*
Given an unsorted linked list of N nodes. The task is to remove duplicate elements from this unsorted Linked List. 
When a value appears in multiple nodes, 
the node which appeared first should be kept, all others duplicates are to be removed.
*/

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void print(Node *root)
{
    Node *temp = root;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node *removeDuplicates(Node *root);

int main()
{

    int T;
    cin >> T;

    while (T--)
    {
        int K;
        cin >> K;
        struct Node *head = NULL;
        struct Node *temp = head;

        for (int i = 0; i < K; i++)
        {
            int data;
            cin >> data;
            if (head == NULL)
                head = temp = new Node(data);
            else
            {
                temp->next = new Node(data);
                temp = temp->next;
            }
        }

        Node *result = removeDuplicates(head);
        print(result);
        cout << endl;
    }
    return 0;
} 

// Function to remove duplicates from the linked list
// root: root of the linked list
Node *removeDuplicates(Node *head)
{
    // your code goes here
    Node *p = head;
    Node *q = NULL;

    unordered_set<int> hash;

    while (p != NULL)
    {
        if (hash.find(p->data) != hash.end())
        {
            q->next = p->next;
            delete p;
        }
        else
        {
            hash.insert(p->data);
            q = p;
        }
        p = q->next;
    }
    return head;
}
