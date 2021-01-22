#include <iostream>
using namespace std;

class Duck {
    public:
    virtual void swim();
    virtual void fly() = 0;
    virtual void quack() = 0;
};
void Duck :: swim()
    {
        cout << "The duck swims!" << endl;
    }
class Swim_Duck : public Duck {
    public:
       virtual void swim() {
        Duck :: swim();
    }
    void quack() override{}
    void fly() override{}
};

class Fly_duck : public Duck {
    public:
    void fly() override {
        cout << "the duck flies" << endl;
    }
    void quack() override{}
};

class Quack_duck : public Duck {
    public:
    void quack() override{
        cout << "Duck: quack!" << endl;;
    }
    void fly() override{}
};

int main(){
    Swim_Duck d;
    Fly_duck f;
    Quack_duck q;
    d.swim();
    f.fly();
    q.quack();
}