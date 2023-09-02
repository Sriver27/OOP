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
        static int timeToComplete;
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

    // static function - can access only static members
    static int random(){
        return timeToComplete;
    }
};

// static member variable initialization
int Hero::timeToComplete = 10;

int main(){

    /*RECOMMENDED*/
    cout<<"timeToComplete: "<<Hero::timeToComplete<<endl;

    /*BAD PRACTICE*/
    Hero harsh;
    cout<<"timeToComplete: "<<harsh.timeToComplete<<endl;

    Hero hvj;
    hvj.timeToComplete = 20;

    cout<<"updated hvj timeToComplete: "<<hvj.timeToComplete<<endl;
    cout<<"updated harsh timeToComplete: "<<harsh.timeToComplete<<endl;

    cout<<"Static Function call ->"<<Hero::random()<<endl;

   
}



