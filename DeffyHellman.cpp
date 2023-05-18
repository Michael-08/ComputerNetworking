#include<bits/stdc++.h>
using namespace std;

int main(){
    int p = 3,g = 11;
    long int x = 7,y = 5;
    long int k1,k2,tk1,tk2;
    char ch;

    FILE *ptr1,*ptr2;

    tk1 = long(pow(p,x)) % g;
    tk2 = long(pow(p,y)) % g;

    k1 = long(pow(tk2,x)) % g;
    k2 = long(pow(tk1,y)) % g;

    cout<<"K1 is : "<<k1<<"\n"<<"K2 is : "<<k2<<endl;

    ptr1 = fopen("test1.txt","r");
    ptr2 = fopen("test2.txt","w");

    if(ptr1 == NULL){
        cout<<"File not found"<<endl;
        return 0;
    }
    if(ptr2 == NULL){
        cout<<"File not found"<<endl;
        return 0;
    }
    ch = fgetc(ptr1);
    while(!feof(ptr1)){
        fprintf(ptr2,"%c",ch + k1);
        ch = fgetc(ptr1);
    }
    fclose(ptr2);
    fclose(ptr1);


    ptr1 = fopen("test2.txt","r");
    ptr2 = fopen("test3.txt","w");

    if(ptr1 == NULL){
        cout<<"File not found"<<endl;
        return 0;
    }
    if(ptr2 == NULL){
        cout<<"File not found"<<endl;
        return 0;
    }
    
    ch = fgetc(ptr1);
    while(!feof(ptr1)){
        fprintf(ptr2,"%c",ch - k2);
        ch = fgetc(ptr1);
    }
    fclose(ptr2);
    fclose(ptr1);
    
}