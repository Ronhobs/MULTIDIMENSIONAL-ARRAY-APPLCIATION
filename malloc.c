#include<stdio.h>
#include<stdlib.h>
int main(){
    int a;// goes on stack
    int *p;
    p= (int*)malloc(sizeof(int));
    *p=10;
    free(p);
    p=(int*)malloc(20*sizeof(int));
    free(p);
    printf("%d",a);
}