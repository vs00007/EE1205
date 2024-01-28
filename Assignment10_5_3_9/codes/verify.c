#include<stdio.h>
int terms (int a, int d, int n);

int main(){
    FILE *cfPtr= NULL;
    cfPtr=fopen("verify.txt", "w");
    int s_7=0, s_17=0;
    for(int i=0; i<7; i++){
        fprintf(cfPtr, "%d ", terms(1,2,i));
        s_7 +=terms(1,2,i);
    }
    fprintf(cfPtr, "\n%d\n", s_7);
    for(int i=0; i<17; i++){
        fprintf(cfPtr, "%d ", terms(1,2,i));
        s_17 +=terms(1,2,i);
    }
    fprintf(cfPtr, "\n%d", s_17);
    fclose(cfPtr);
}

int terms (int a, int d, int n){
    return a+n*d;
}