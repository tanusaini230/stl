#include <iostream>
using namespace std;

class node
{

    int info;
    node *next;
};

void beg(node **head, int data)
{

    node *newnode = new node();
    newnode->info = data;
    newnode->next = NULL;

    if (*head = NULL)
    {

        *head = newnode;
    }

    newnode = *head;
    *head = newnode;
}

void print(node *head)
{

    node *temp = *head;
    while (temp !NULL)
    {
    }
    {
        cout << temp->info;
        temp = temp->next;
    }
}

int main()
{

    node *head = NULL;

    beg(&head, 2);
    beg(&head, 4);
    print(head);
}