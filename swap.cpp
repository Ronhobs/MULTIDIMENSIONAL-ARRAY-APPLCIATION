//Write a C++ function to swap integers without
//using a temp variable.

//Hint think about pointers
#include<iostream>
using namespace std;

int main(){
    int x=10;
    int y=33;
    cout<<"\n Before swap x="<<x<<"y="<<y;
    swap(x,y);
    cout<<"\nAfter swap x="<<x<<"y="<<y;
    return 0;
}