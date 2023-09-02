#include<iostream>
using namespace std;

class Hero{
    // properties
    public:
        char level;
    private:
        int health;

        void print(){
            cout<<"Access health property from inside class: "<<health<<endl;
        }
    public:
        // setter
        void setHealth(int h){
            health = h;
        }
        // getter
        int getHealth(){
            return health;
        }

        Hero(){
            cout<<"Simple Constructor called ---> Object created."<<endl;
        }
        ~Hero(){
            cout<<"Destructor called ---> Object destroyed."<<endl;
        }
};

int main(){

    // static allocation
    Hero harsh;
    
    // dynamic allocation
    Hero *hvj = new Hero;

    delete hvj; // manually destructor call for dynamically alocated object

   
}
