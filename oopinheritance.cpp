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
};
class Developer:Employee{
public:
string FavProgrammingLanguage;
Developer(string name,string company,int age,string favProgrammingLanguage)
    :Employee(name,company,age){
    FavProgrammingLanguage=favProgrammingLanguage;
}
void FixBug(){
    std::cout<<Name<<"fixed bug using"<<FavProgrammingLanguage<<std::endl;
}
};
class Teacher:Employee{
    public:
    string Subject;
    void PrepareLesson() {
    std::cout << Name << " is preparing " << Subject << " lesson" << std::endl;
}

    Teacher(string name,string company,int age,string subject)
    :Employee(name,company,age){
        Subject=subject;
    }
};

int main(){
Developer d= Developer("Saldina","HP",25,"C++");

Teacher t=Teacher("Jack","Cool School",34,"History");
t.PrepareLesson();

    
}