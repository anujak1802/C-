#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertatHead(node *&head, int val)
{

    node *temp = new node(val);
    temp->next = head;
    if (head != NULL)
    {
        head->prev = temp;
    }

    head = temp;
}

void insertatTail(node *&head, int val)
{
    if (head == NULL)
    {
        insertatHead(head, val);
        return;
    }
    node *newnode = new node(val);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void deleteatHead(node *&head)
{
    node *todelete = head;
    head = head->next;
    head->prev = NULL;
    delete todelete;
}

void deletion(node *&head, int pos)
{
    if (pos == 1)
    {
        deleteatHead(head);
    }
    node *temp = head;
    int count = 1;
    while (count != pos && temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }
    delete temp;
}
int length(node *head)
{
    int l = 0;
    node *temp = head;
    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}

node *kappend(node *&head, int k)
{

    node *newHead;
    node *newTail;
    node *tail = head;
    int l = length(head);
    k = k % l;
    int count = 1;
    while (tail->next != NULL)
    {
        if (count == l - k)
        {
            newTail = tail;
        }
        if (count == l - k + 1)
        {
            newHead = tail;
        }
        tail = tail->next;
        count++;
    }
    newTail->next = NULL;
    tail->next = head;

    return newHead;
}

int main()
{
    node *head = NULL;
    insertatTail(head, 1);
    insertatTail(head, 2);
    insertatTail(head, 3);
    insertatTail(head, 4);
    insertatTail(head, 5);
    display(head);
    deletion(head, 3);
    display(head);
    node *newhead = kappend(head, 3);
    display(newhead);
    return 0;
}