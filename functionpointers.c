//Function pointers in C/C++
#include<stdio.h>
int Add(int a, int b){
    return a + b;
}
int main(){
    int c;
    int (*p)(int,int);
    p=&Add;
    c=(*p)(2,3);//dereferencing and callin the function
    printf("%d",c);
    
}