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

    Hero harsh;

     cout<<"Size of object: "<<sizeof(harsh)<<endl;
    harsh.setHealth(80);
    /*cout<<"Health: "<<harsh.health<<endl; */ // this shows error because health is private
    cout<<"Health: "<<harsh.getHealth()<<endl;
    harsh.level = 'A';
    cout<<"Level: "<<harsh.level<<endl;
}
