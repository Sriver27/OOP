#include<iostream>
using namespace std;

class A{
    public:
        void sayHello(){
            cout<<"Hello from A"<<endl;
        }

        //NOTE: FUNCTION THAT DIFFER ONLY IN RETURN TYPE CANNOT BE OVERLOADED
        /*int sayHello(){
            cout<<"Hello from A"<<endl;
        }*/

        void sayHello(string name){
            cout<<"Hello from "<<name<<endl;
        }
};

class B{

    public:
        int a;
        int b;

    public:
        int add(){
            return a+b;
        }

        // opeartor overloading
        void operator+(B &obj){
            int value1 = this->a;
            int value2 = obj.a;
            cout<<"output -> "<<value2-value1<<endl; 
        }

        void operator() () {
        cout << "main Bracket hu " << this->a << endl;
    }

};

class Animal{
    public:
       
        void speak(){
            cout<<"speaking "<<endl;
        }
    
};

class Dog : public Animal{

    public:
        void speak(){
            cout<<"barking "<<endl;
        }
    
};

int main(){

    Dog d1;

    d1.speak();



   /* B obj1,obj2;

    obj1.a = 10;
    obj2.a = 20;

    obj1+obj2;
    obj1(); */

    return 0;
}