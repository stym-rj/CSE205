#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};


class List
{
private:
    Node *head;

public:
    List()
    {
        head = NULL;
    }
    void insertlist(int d)
    {
        Node *n = new Node;
        n->data = d;
        n->next = NULL;
        if (head == NULL)
        {
            head = n;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)

                temp = temp->next;
            temp->next = n;
        }
    }
    void traversalList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    List l;
    for (int i = 0; i < 10; i++)
    {
        l.insertlist(i);
    }

    l.traversalList();
}