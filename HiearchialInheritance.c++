#include<iostream>
using namespace std;
class car{
    public:
    string name;
    int age;
    int weight;
    void speedingup(){
        cout<<"speedingup"<<endl;
    }
    class scorpio:public car{

    };
    class fortuner:public car{

    };
};
int main(){
    scorpio s11;
    cout<<s11.speedingup()<<endl;
    fortuner f11;
   cout<< f11.speedingup();
   return 0;

}