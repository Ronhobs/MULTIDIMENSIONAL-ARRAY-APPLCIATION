#include "purevirtualfunctions.hpp"
int main(){
    Cat c1("polly",20.0,"cat");
    Dog d1("spot", 30.0, "dog");
    cout<<"\n Polly Rate: $"<<c1.calcDailyRate();
    cout<<"\n Spot Rate:$"<<d1.calcDailyRate();
    return 0;
}