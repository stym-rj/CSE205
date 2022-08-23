#include<iostream>
using namespace std;

int main(){
    int a[]={1,5,7};
    int b[]={2,3,4,8,9};

    int elements_in_a=sizeof(a)/4;
    int elements_in_b=sizeof(b)/4;

    int NA=0, NB=0, NC=0;
    int c[elements_in_a+elements_in_b];

    while(NA<=elements_in_a && NB<=elements_in_b){
        if (a[NA]<=b[NB]){
            c[NC]=a[NA];
            NA++;
        }
        else{
            c[NC]=b[NB];
            NB++;
        }
        NC++;
    }
    if(NA>elements_in_a){
        while(NB<=elements_in_b){
            c[NC]=b[NB];
            NB++;
            NC++;
        }
    }
    else{
        while(NA<=elements_in_a){
            c[NC]=a[NA];
            NC++;
            NA++;
        }
    }

    int elements_in_c=sizeof(c)/4;
    for(int i=0; i<elements_in_c; i++)    cout<<c[i]<<endl;
    

}