#include<iostream>
using namespace std;

class Student{

    private:
        string name;
        int age ;
        double height;
    public:
        int getAge(){
            return this->age;
        }

};

int main(){

    Student s1;
    cout<<s1.getAge()<<endl;
    return 0;

}