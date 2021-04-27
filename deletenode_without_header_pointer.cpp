/*
You are given a pointer/ reference to the node which is to be deleted from the linked list of N nodes. 
The task is to delete the node. Pointer/ reference to head node is not given. 
Note: No head reference is given to you. It is guaranteed that the node to be deleted is not a tail node in the linked list.
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
} * head;

Node *findNode(Node *head, int search_for)
{
    Node *current = head;
    while (current != NULL)
    {
        if (current->data == search_for)
            break;
        current = current->next;
    }
    return current;
}

void insert()
{
    int n, i, value;
    Node *temp;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &value);
        if (i == 0)
        {
            head = new Node(value);
            temp = head;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}


void printList(Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    cout << endl;
}

void deleteNode(Node *node_ptr);


int main(void)
{
    

    int t, k, n, value;

    scanf("%d", &t);
    while (t--)
    {
        insert();
        scanf("%d", &k);
        Node *del = findNode(head, k);
        if (del != NULL && del->next != NULL)
        {
            deleteNode(del);
        }
        printList(head);
    }
    return (0);
}


void deleteNode(Node *node)
{
    struct Node *p;
    if (node == NULL)
        return;
    p = node->next;
    node->data = p->data;
    node->next = p->next;
    delete p;
}
