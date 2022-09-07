#include<iostream>
using namespace std;
int n=100, stack[100], top=-1;

void push(int item){
    if(top>=n){
        cout<<"Overflow"<<endl;
        return;
    }
    top++;
    stack[top]=item;
    cout<<"Item "<<item<<" inserted"<<endl;
}

void pop(){
    if(top<=-1){
        cout<<"Underflow"<<endl;
        return;
    }
    cout<<"Item "<<stack[top]<<" removed"<<endl;
    top--;
}

void peek(){
    if(top<0){
        cout<<"No element found in the stack"<<endl;
        return;
    }
    for(int i=top; i>=0; i--){
        cout<<stack[i]<<" ";
    }
    cout<<endl;
}

void showChoices(){
    cout<<"1. Insert"<<endl;
    cout<<"2. Delete"<<endl;
    cout<<"3. Display"<<endl;
    cout<<"4. Exit"<<endl;
}


int main(){
    int choice, item;

    showChoices();

    do{
        cout<<"Enter your choice : ";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Enter the element to be inserted : ";
                cin>>item;
                push(item);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                cout<<"Exiting..."<<endl;
                break;
            default:
                cout<<"Invalid key"<<endl;
                break;
        }
    }
    while(choice!=4);
}