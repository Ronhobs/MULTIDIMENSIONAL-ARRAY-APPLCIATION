/*Goal: study a simple example in inheritance*/
#include"inheritance.hpp"
int main(){
    //Create an instance of the derived class,
    //GradStudent
    GradStudent gs1;
    //Set the id of the grad student
    //Using the function in the base class
    gs1.setId(123456789);

    //set the degree of the grad student
    //using the function in the derived class
    gs1.setDegree("BSEE");

cout<<gs1.getId()<<""<<gs1.getDegree();
return 0;
}