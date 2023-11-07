#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtStart(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void reverse(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *f = NULL;
    while (curr != NULL)
    {
        f = curr->next;
        curr->next = prev;
        prev = curr;
        curr = f;
    }
}

int main()
{
    Node *node = new Node(10);
    Node *head = node;
    insertAtStart(head, 12);
    print(head);
    insertAtStart(head, 17);
    print(head);
    insertAtStart(head, 121);
    print(head);
    insertAtStart(head, 912);
    print(head);
    reverse(head);
    print(head);

    return 0;
}