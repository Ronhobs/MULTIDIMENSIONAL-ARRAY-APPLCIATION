#include<stdio.h>
int main(){
    int a =1025;
    int *p;
    p=&a;
    printf("size of integer is %d bytes\n",sizeof(int));
    printf("Address=%d,value=%d\n",p,*p);
    printf("Address=%d, value=%d\n",p+1,*(p+1));
    char*po;
    po=(char*)p;//typecasting
    printf("size of char is %d bytes\n",sizeof(char));
    printf("Address=%d, value=%d\n",po,*po);
    printf("Address=%d, value=%d\n",po+1,*(po+1));
    //1025= 00000000  00000000  00000100  00000001
    //character prints out 00000001(ie 1 byte) if we move
    //one byte up it then prints the next value 00000100(ie 4 bytes)
}