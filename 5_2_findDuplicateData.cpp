#include<iostream>
using namespace std;

void recc(int arr[], int size){

    for(int i = 0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]==arr[j])  cout<<arr[i]<<" ";
        }
    }
}

int main(){
    int size;
    int arr[size];

    cin>>size;

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    recc(arr, size);
}