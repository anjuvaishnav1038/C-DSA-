#include <iostream> 
using namespace std; 
class base{     
public:         
int a,b; 
base(){
cout<<"enter value of a";
cin>>a;
cout<<"enter value of b";             
cin>>b;
cout<<"Sum "<<a<<" + "<<b<<" = ___"<<endl; 
} 
}; 
class derived: public base{
public:       
derived() 
{
cout<<"I am child of base class"<<endl; 
} 
} ; 
class derived_child: public derived{     
public: derived_child() 
{ 
cout<<endl<<"Result of addition of base class is "<<a+b<<endl; 
} 
}; 
int main() {     
derived_child obj; 
return 0; 
} 
