#include<iostream>
using namespace std;

void display(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

void insertionSort(int arr[], int size){
    int key, j;
    for(int i=1; i<size; i++){
        key=arr[i];
        j=i;
        while(j>0 && arr[j-1]>key){
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]=key;
    }
}

int main(){
    int n;
    cout<<"enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // int n=5;
    // int arr[n]={3,2,6,7,1};

    display(arr, n);
    insertionSort(arr, n);
    display(arr, n);
}