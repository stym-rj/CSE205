// date- 17th aug 2022
#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void display(int arr[], int size){
    for(int i=0; i<size; i++)   cout<<arr[i]<<" ";
    cout<<endl;
}

void bubble_sort(int arr[], int size){
    int pass=1;
    for(int i=0; i<size-1; i++){
        int swaps=0;
        cout<<"entering pass : "<<pass<<endl;
        for(int j=0; j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swaps=1;
            }
        }
        display(arr, size);
        if(!swaps)  break;
        pass++;
    }
}

int main(){
    int arr[]={51,49,11,6,45,44,65,68};
    int size= sizeof(arr)/4;
    cout<<"initial array-------------"<<endl;
    display(arr, size);

    bubble_sort(arr, size);
    cout<<"final array---------------"<<endl;
    display(arr, size);
}