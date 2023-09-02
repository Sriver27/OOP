#include<iostream>
#include<cstring>
using namespace std;

class Hero{
    // properties
          
    private:
        int health;

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
        // copy constructor ----> shallow copy  (default copy constructor)
        Hero(Hero &temp)
        {
            cout<<"Copy constructor called"<<endl;
           this->name = temp.name;
            this->health = temp.health;
            this->level = temp.level;
        }
        // copy constructor ----> deep copy
        Hero(Hero &temp)
        {
            cout<<"Copy constructor called"<<endl;
            this->name = new char[strlen(temp.name)+1];
            strcpy(this->name, temp.name);
            this->health = temp.health;
            this->level = temp.level;
        }
        // setter
        void setHealth(int h){
            health = h;
        }
        // getter
        int getHealth(){
            return health;
        }
        void print(){
        cout << endl;
        cout << "[ Name: " << this->name<< " ,";
        cout << "health: " << this->health << " ,";
        cout <<"level: " << this->level << " ]";
        cout << endl << endl;
        }

       

        char getLevel() {
            return level;
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
    Hero harsh;
    
   harsh.setHealth(100);
    harsh.setLevel('A');
    char name[8] = "striver";
    harsh.setName(name);

    harsh.print();

    Hero hvj(harsh);
    hvj.print();

    harsh.name[0] = '$';
    harsh.print();
    hvj.print();
    



   
}
