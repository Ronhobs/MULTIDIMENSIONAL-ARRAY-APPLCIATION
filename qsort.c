//Function pointers and callbacks
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int compare(const void* a, const void* b){
    int A=*((int*)a);//typecasting to int*
    int B= *((int*)b);
    return abs(A)-abs(B);
}
int main(){
    int i, A[]={-31,22,-1,50,-4,4};
    qsort(A,6,sizeof(int),compare);
    for(i=0;i<6;i++){
        printf("%d",A[i]);
    }


}