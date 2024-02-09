#include<stdio.h>

int terms(int n){
    if(n<0) return 0;
    else return (n+1)*(n+2)*(n+2)*(n+3)/12;
}

int main(){
    FILE *ptr;
    ptr=fopen("series.dat", "w");
    for(int i=-3; i<12; i++){
        fprintf(ptr,"%d ", terms(i));
    }
    fprintf(ptr,"%d", terms(12));
    fclose(ptr);
}