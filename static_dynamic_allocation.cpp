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
};

int main(){

    // static allocation
    Hero harsh;
    
    // dynamic allocation
    Hero *hvj = new Hero;

    harsh.level = 'A';
    (*hvj).level = 'B'; // hvj->level = 'B'; (arrow operator)

    cout<<"Level: "<<harsh.level<<endl;
    cout<< " Level of hvj: "<<hvj->level<<endl;
    



   
}
