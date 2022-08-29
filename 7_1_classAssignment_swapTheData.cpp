// Write a program to swap pair wise elements of Linked List.


#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int _data){
            data=_data;
            next=NULL;
        }

        Node* insertList(int _data){
            Node* temp=new Node(_data);
            Node* curr=this;
            while(curr->next!=NULL){
                curr=curr->next;
            }
            curr->next=temp;

            return this;
        }

        

        Node* swap(){
            Node* curr=this;

            while(curr!=NULL){
                int temp; 
                Node* temp2=curr->next;


                temp=curr->data;
                curr->data=temp2->data;
                temp2->data=temp;

                curr=curr->next->next;
            }

            return this;
        }

        void printList(){
            Node* curr=this;

            while(curr!=NULL){
                cout<<curr->data<<" ";
                curr=curr->next;
            }
            cout<<endl;
        }
};

int main(){
    cout<<"enter the number of elements : ";
    int size;
    cin>>size;

    cout<<"enter the elements : "<<endl;
    int temp;
    cin>>temp;

    Node* head= new Node(temp);

    for(int i=0; i<size-1; i++){
        int temp2;
        cin>>temp2;
        head= head->insertList(temp2);
    }
    
    cout<<"before swapping : "<<endl;
    head->printList();
    head= head->swap();

    cout<<"after swapping : "<<endl;
    head->printList();

    return 0;
}