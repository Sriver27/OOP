#include<iostream>
#include<cstring>
using namespace std;

// NOTE : this keyword is a pointer which points to the object which is calling the function ie. current object

class Hero{
    // properties     
    
    private:
        int health;

        /*void print(){
            cout<<"Access health property from inside class: "<<health<<endl;
        }*/
   

    public:
        char level;
        char *name;
        // default constructor
        Hero(){
            cout<<"Constructor called"<<endl;
            name = new char[100];
        }
        // parameterized constructor
        Hero(int health)
        {
        // cout<<" this -> "<< this<<endl;
        this->health = health;
        }
        // copy constructor
        Hero(Hero &temp)
        {
            cout<<"Copy constructor called"<<endl;
           this->name = temp.name;
            this->health = temp.health;
            this->level = temp.level;
        }
       void print(){
        cout << endl;
        cout << "[ Name: " << this->name<< " ,";
        cout << "health: " << this->health << " ,";
        cout <<"level: " << this->level << " ]";
        cout << endl << endl;
    }

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }

    void setName(char name[]) {
        strcpy(this->name, name);
    }
};

int main(){

    // static allocation
    Hero harsh(100);
    
    // dynamic allocation
    Hero *hvj = new Hero(90);

 /* cout<<" address of static allocation object : "<<&(harsh)<<endl;
    cout<<" address of dynamic allocation object : "<<(hvj)<<endl; */
    harsh.setHealth(100);
    harsh.level = 'A';
    (*hvj).level = 'B'; 
    char name[8] = "striver";

    // harsh.setName(name);
    harsh.print();

    // copy constructor
    // Hero harsh2(harsh);
    // cout<<"Level: "<<harsh2.level<<endl;
    // cout<<"Health: "<<harsh2.getHealth()<<endl;

    
    // harsh2.setName(harsh.name);
    // cout<<"Name of harsh object: "<<harsh.name<<endl;
    // cout<<"Name of harsh2 object: "<<harsh2.name<<endl;
    // harsh.print();
    // harsh2.print();


    strcpy(name, "hustler");

    // harsh.print();
    // harsh2.print();

   
}



