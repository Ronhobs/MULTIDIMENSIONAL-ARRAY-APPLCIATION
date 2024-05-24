#include<iostream>
using std::string;

class Employee{

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


};


int main(){
    Employee employee1= Employee("Saldina","YT-CodeBeauty", 25);
   employee1.IntroduceYourself();

employee1.setName("Ronald");
employee1.setAge(15);
std::cout<<employee1.getName()<<"\t" <<"is"<<"\t"<<employee1.getAge()<<"\t"<<"years old"<<std::endl;

    
}