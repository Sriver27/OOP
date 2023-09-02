#include<iostream>
using namespace std;


/*
        Base Class Access Specifiers        Derived Class Mode of Inheritance       Resultant Access Specifiers

        public                              public                                  public
        public                              protected                               protected
        public                              private                                 private

        protected                           public                                  protected
        protected                           protected                               protected
        protected                           private                                 private

        private                             public                                  Not Accessible
        private                             protected                               Not Accessible
        private                             private                                 Not Accessible
*/

class Human{
    public:
        double weight;
        int age;
        double height;

        void eat(){
            cout<<"Human is eating"<<endl;
        }

        int getAge(){
            return this->age;
        }

        void setWeight(double w){
            this->weight = w;
        }
};

/*class Male : public Human{
    public:
        string skinTone;
};*/

/*class Male : protected Human{
    public:
        string skinTone;
        double getHeight(){return this->height;}
};*/

class Male : private Human{
    public:
        string skinTone;
        double getHeight(){return this->height;}
};

int main(){

    Male m1;

    // cout<<m1.height<<endl;  /*CANNOT BE ACCESSED -- PROTECTED OR PRIVATE MODE*/
    cout<<m1.getHeight()<<endl;


    /*cout<<"Age: "<<m1.getAge()<<endl;
    m1.setWeight(81.5);
    cout<<"Weight: "<<m1.weight<<endl;
    m1.eat();
    m1.skinTone = "Brown";
    cout<<"Skin Tone: "<<m1.skinTone<<endl; */
}