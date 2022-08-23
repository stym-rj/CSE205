#include<iostream>
using namespace std;
int main(){
    int a[7]={3,4,5,6,7}, n, index, position;
    cout<<"traversing in forward direction: "<<endl;
    for (int i=0; i<5; i++){
        cout<<a[i]<<endl;
    }

    cout<<"traversing in backward dir"<<endl;
    for(int i=5; i>=0; i--){
        cout<<a[i]<<endl;
    }

    char ch[5], item;
    cout<<"no. of elements to be inserted : "<<endl;
    cin >> n;
    for (int i=0; i<n ; i++){
        cin >> ch[i];


    }

    cout<<"array after insertion"<<endl;

    for(int i=0; i<n; i++){
        cout<<ch[i]<<endl;
    }


    cout<<"performing linear search: "<<endl;

    cout<<"enter the element you want to search : ";
    cin >> item;

    for(int i=0; i<n; i++){
        if(ch[i]==item)     {
            index=i;
            break;
        }
    }

    cout<<"item found at location : "<<index<<endl;

    cout<<"which location element you want to delete : "<<endl;
    cin>> position;

    for (int i=position; i<n-1; i++){
        ch[i]=ch[i+1];
    }

    cout<<"after deletion : "<<endl;

    for(int i=0; i<n-1; i++){
        cout<<ch[i]<<endl;
    }
}