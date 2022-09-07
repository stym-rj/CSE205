//backward traversal

#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* prev_link;
        Node* forw_link;
        
        Node(int _data){
            data=_data;
            prev_link=NULL;
            forw_link=NULL;
        }

        Node(int _data){
            data=_data;
            prev_link=NULL;
            forw_link=NULL;
        }

        void backwardTraverse(){
            Node* curr=this;

            while(curr!=NULL){
                cout<<curr->data<<endl;
                curr=curr->prev_link;
            }
        }

        Node* insertAtEnd(int _data){
            Node* curr=this;
            while(curr->forw_link!=NULL){
                curr=curr->forw_link;
            }
        }

};

int main(){
    
    Node* head=new Node(56);

    return 0;
}