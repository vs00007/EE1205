#include<stdio.h>
int terms(int a, int d, int n);

int main(){
    FILE *ptr;
    ptr=fopen("series.txt", "w");
    for(int i=-3; i<10; i++){
        fprintf(ptr, "%d ", terms(1,2,i));
    }
}

int terms(int a, int d, int n){
    if(n<0) return 0;
    else return a+n*d;
}