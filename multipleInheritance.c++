#include<iostream>
using namespace std;
class A{
    public:
    int chemistry;
    A(){
        chemistry=101;
    }
};
class B{
    public:
    int chemistry;
    B(){
        chemistry=420;
    }
};
class C:public A,public B{
    public:
    int maths;
};
int main(){
    C obj;
   // obj.physics;
    cout<<obj.A::chemistry<<" "<<obj.maths;

    return 0;
}