#ifndef BIRD_H
#define BIRD_H
#include<iostream>

class Bird
{
public:
virtual void eat() = 0;
virtual void fly() = 0;

// classes that inherits this calss 

// has to implement pure virtual fns 
};

class sparrow :public Bird{

    public :
    void eat() {
        std::cout<< "Sparrow is eating\n";
    }
    void fly(){
        std::cout<< "Sparrow is flying\n";
    }
};


class eagle :public Bird
{
    public:
    void eat(){
        std::cout<< "Eagele is eating ";
    };

     void fly(){
        std::cout<< "Eagel  is flying\n";
    }
};

#endif  // BIRD_H
