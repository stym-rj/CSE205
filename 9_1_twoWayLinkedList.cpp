#include <iostream>
using namespace std;

class Node{
    public:
        Node* next;
        int data;
        Node* prev;
};

class List{
    private:
    Node* head, *tail;
    public:
    List(){
        head=NULL;
        tail= NULL;
    }
    void insertList(int _data){
        Node* n=new Node;
        n->data=_data;
        n->prev=NULL;
        n->next=head;
        if(head==NULL){
            head=n;
            tail=n;
        }
        else{
            head->prev=n;
            head=n;
        }
    }

    void deleteNode(int pos){
        if(head==NULL){
            cout<<"Linked List is empty"<<endl;
        }
        else{
            Node* ptr;
            if(pos=0){
                cout<<"element deleted "<<head->data<<endl;
                ptr=head;
                head=head->next;
                head->prev=NULL;
                delete(ptr);
            }
            else{
                ptr=head;
                while(pos>0){
                    --pos;
                    ptr=ptr->next;
                }
                cout<<"element removed "<<ptr->data<<endl;
                (ptr->prev)->next=ptr->next;
                (ptr->next)->prev=ptr->prev;
            }
        }
    }
};

int main(){
    
    return 0;
}