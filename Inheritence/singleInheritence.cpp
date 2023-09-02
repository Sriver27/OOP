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

int main(){
    
        Dog d1;
        d1.speak();
        return 0;
}