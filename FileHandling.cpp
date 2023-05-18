#include<bits/stdc++.h>
using namespace std;

int main(){
    char i = '1';
    FILE *ptr1,*ptr2;

    ptr1 = fopen("numbers.txt","w");
    while(i <= '9'){
        fprintf(ptr1,"%c ",i++);
    }

    fclose(ptr1);
    
    ptr1 = fopen("numbers.txt","r");
    ptr2 = fopen("squares.txt","w");

    char j = fgetc(ptr1);
    while(!feof(ptr1)){
        fprintf(ptr2,"%d  ",int(j)*int(j));
        j = fgetc(ptr1);
        j = fgetc(ptr1);
    }

}