#include<iostream>
using namespace std;

class Animal{
    public:
    void speak(){
        cout<<"speaking";
    }
    };
    class Dog:public Animal{
        public:
        void speak(){
            cout<<"bark";
        }
    };

int main()
{
    Dog dog;
    dog.speak();
    return 0;
}