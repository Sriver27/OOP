#include<iostream>
using namespace std;

class Animal{
    public:
        int weight;
        int height;
        int age;

        void speak(){
            cout<<"speaking...."<<endl;
        }
    
};

class Dog : public Animal{
    
};

class GermanShepherd : public Dog{
    
};

int main(){
    
        GermanShepherd gs1;
        gs1.speak();
        return 0;
        
}