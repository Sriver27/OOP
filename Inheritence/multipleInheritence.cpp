#include<iostream>
using namespace std;

class Animal{
    public:
        int weight;
        int height;
        int age;

        void bark(){
            cout<<"barking...."<<endl;
        }
    
};

class Human {

    public:
    void speak(){
        cout<<"speaking..."<<endl;
    }
    
};

class Hybrid: public Animal, public Human{
    
};

int main(){
    
        Hybrid h1;
        h1.bark();
        h1.speak();
        return 0;
}