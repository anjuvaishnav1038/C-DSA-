#include<iostream>
using namespace std;
class car{
    public:
    string name;
    int weight;
    int age;
    void speedup(){
        cout<<"speeding up"<<endl;
    }
    void breakMarro(){
        cout<<"break mardii"<<endl;
    }
};
class scorpio:public car{

};
int main(){
    scorpio babbarwali;
    babbarwali.speedup();
    return 0;
}