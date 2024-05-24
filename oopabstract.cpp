#include<iostream>
using std::string;
class AbstractEmployee{
virtual void AskForPromotion()=0;

};

class Employee:AbstractEmployee{

string Name;
string Company;
int Age;
public:
void setName(string name){
    Name=name;
}
string getName(){
    return Name;
}
void setCompany(string company){
    Company=company;
}
string getCompany(){
    return Company;
}

void setAge(int age){
    if(age>=18)
    Age=age; 
}
int getAge(){
    return Age;
}
//Set and get are used for encapsulation

void IntroduceYourself(){}
    Employee(string Name, string company,int age){}

void AskForPromotion(){
    if(Age>=30)
    std::cout<<Name<<"got promoted"<<std::endl;
    else
    std::cout<<Name<<"no promotion!"<<std::endl;
}
};


int main(){
    Employee employee1= Employee("Saldina","YT-CodeBeauty", 25);
    Employee employee2= Employee("Johnny","Amazon",34);
    employee1.AskForPromotion();
    employee2.AskForPromotion();

    
}