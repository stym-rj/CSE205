#include<iostream>
using namespace std;

int main(){
    int a[]={1,3,4};
    int b[] ={2,5,6,8};
    int sizeof_a=(sizeof(a)/4), sizeof_b=(sizeof(b)/4);
    int na=0, nb=0, nc=sizeof_a+sizeof_b;
    int n=0;
    int c[nc];

    while(na<sizeof_a || nb<sizeof_b){
        if(na>=sizeof_a){
            c[n]=b[nb];
            nb++;
            n++;
            continue;
        }
        if(a[na]<b[nb]){
            c[n]=a[na];
            na++;
        }
        else{
            c[n]=b[nb];
            nb++;
        }
        n++;
    }

    cout<<"printing merged array"<<endl;

    for(int i=0; i< nc; i++){
        cout<<c[i]<<endl;
    }

}