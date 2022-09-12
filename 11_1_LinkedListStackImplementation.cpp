#include<iostream>

class Node{
    public:
        int data;
        Node* next;
};

class Stack{
    Node* front;
    public:
        Stack(){
            front=NULL;
        }

        void push(int _data){
            Node* temp=new Node();
            temp->data=_data;
            
            if(front==NULL){
                front=temp;
            }
            else{
                temp->next=front;
            }
            front=temp;
        }

        void pop(){
            if(front==NULL)     std:: cout<<"UnderFlow\nExiting..."<<std:: endl;
            else{
                std:: cout<<"element "<<front->data<<" removed"<<std:: endl;
                Node* temp=front;
                front=front->next;
                delete(temp);
            }
        }

        void peek(){
            if(front==NULL)     std:: cout<<"Stack Empty"<<std:: endl;
            else
                std:: cout<<front->data<<std:: endl;    
        }
};

int main(){
    Stack s;
    s.push(45);
    s.peek();
    s.pop();
    s.peek();
    s.push(65);
    s.peek();
    s.pop();
    s.peek();
    s.pop();

    int n;
    std:: cout<<"Enter the 5 elements : ";
    for(int i=0; i < 5 ; i++){
        std:: cin>> n ;
        s.push(n);
    }
    s.pop();
    s.peek();
}