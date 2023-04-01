#include<iostream>
using namespace std;
class Animal{
    private:
    int weight;
public:
//state and properties
int age;
string type;
//behaviour
void eat(){

}
void sleep(){
cout<<"sleeping"<<endl;
}
int getWeight(){
    return weight;
}
void setWeight(int w){
   this-> weight=w;
}
};
int main(){
    //object creation
    //1.static memmory allocation
     Animal ramesh;
     ramesh.type="Lion";
     ramesh.age=12;
  cout<<"age"<<ramesh.age<<endl;
  cout<<"Type of Ramesh"<<ramesh.type<<endl;
    //2.dynamic memory alllocation
    Animal*suresh=new Animal;
    (*suresh).age=15;
    (*suresh).type="tiger";
    //alternate dynamic memory allocation
    suresh->age=11;
    suresh->type="dog";
    suresh->eat();
    suresh->sleep();


   ramesh.sleep();

return 0;
}