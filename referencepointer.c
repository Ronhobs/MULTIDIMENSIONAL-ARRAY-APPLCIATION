//Pointers as function arguments-call by reference
#include<stdio.h>
void increment(int *p){
    *p=(*p)+1;
}
int main(){
    int a;
    a=10;
    increment(&a);
    printf("a=%d",a);
}