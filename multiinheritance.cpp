#include "multiinheritance.hpp"
int main(){
    TA t1;
    t1.setId(5555);
    t1.setSupervisor("Dr. Caohuu");
    t1.setTitle("Adjunct Prof.");
    cout<<t1.getSupervisor()<<endl <<""<<t1.getId() <<endl <<""<<t1.getTitle();
    return 0;
}