#include<iostream>
using std::string;
class AbstractEmployee{
virtual void AskForPromotion()=0;

};
class Employee:AbstractEmployee{
string Company;
int Age;
protected:
string Name;
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


  Employee(string name, string company, int age){
Name=name;
company=Company;
Age=age;
  } 
 

void AskForPromotion(){
    if(Age>=30)
    std::cout<<Name<<"got promoted"<<std::endl;
    else
    std::cout<<Name<<"no promotion!"<<std::endl;
}
virtual void Work(){
    std::cout<<Name<<"is checking email, task backlog,performing tasks..."<<std::endl;
}
//WHat virtual void work does here is check if there is implementation
//of these derived function then execute
};
class Developer:public Employee{
public:
string FavProgrammingLanguage;
Developer(string name,string company,int age,string favProgrammingLanguage)
    :Employee(name,company,age){
    FavProgrammingLanguage=favProgrammingLanguage;
}
void FixBug(){
    std::cout<<Name<<"fixed bug using"<<FavProgrammingLanguage<<std::endl;
}
void Work(){
    std::cout<<Name<<"is writing"<<FavProgrammingLanguage<<"code"<<std::endl;
}
};
class Teacher:public Employee{
    public:
    string Subject;
    void PrepareLesson() {
    std::cout << Name << " is preparing " << Subject << " lesson" << std::endl;
}

    Teacher(string name,string company,int age,string subject)
    :Employee(name,company,age){
        Subject=subject;
    }
    void Work(){
    std::cout<<Name<<"is Teaching"<<Subject<<std::endl; 
    }
};
//The most common use of polymporphism is when a
//parent class reference is sued to refer to a child class object
int main(){
Developer d= Developer("Saldina","HP",25,"C++");

Teacher t=Teacher("Jack","Cool School",34,"History");
//pointer can hold class to derived class reference
Employee* e1=&d;
  Employee* e2=&t;
  // -> this symol is used to access members of a pointer
  //instead of dot symbol
  e1->Work();
  e2->Work();
}