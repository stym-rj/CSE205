#include<iostream>
using namespace std;

void recc(int arr[], int size){
    int count=0;
    for(int i=0; i < size-1; i++){
        if(arr[i]==arr[i+1]){
            
            if(count)   continue;
            count++;
            cout<<arr[i]<<" ";
            continue;
        }
        count=0;
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