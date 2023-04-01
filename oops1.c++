#include<iostream>
using namespace std;
class Animal{
    private:
    int weight;
public:
//state and properties
int age;
string type;
//constructor
//Default constructor
Animal(){
    cout<<"constructor called"<<endl;
    this->weight=0;
    this->age=0;
    this->type=" ";
}
//parametrized constructor
Animal(int age){
    this->age=age;
    cout<<"parameterized constructor called"<<endl;
}
~Animal(){
    cout<<"destructor called"<<endl;}
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
   Animal a(10);
   Animal*b=new Animal(100);
   Animal d;
   d.age=10;
   Animal* e=new Animal(19);
   //manually
   delete e;

return 0;
}