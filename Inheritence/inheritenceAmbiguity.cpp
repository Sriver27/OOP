#include<iostream>
using namespace std;

class Animal{
    public:
        int weight;
        int height;
        int age;

        void speak(){
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
        // h1.speak(); // Ambiguity
        h1.Animal::speak();
        h1.Human::speak();
        return 0;
}