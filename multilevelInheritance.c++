#include<iostream>
using namespace std;
class Fruit{
    public:
    string name;
};
class mango:public Fruit{
public:
int weight;
};
class Alpanso:public mango{
public:
int sugarLevel;
};
int main(){
    Alpanso a;
    cout<<a.name<<a.weight<<a.sugarLevel<<endl;
    return 0;
}