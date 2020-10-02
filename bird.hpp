//
// Created by Eric Dam on 2020-10-01.
//

#ifndef LAB4_BIRD_HPP
#define LAB4_BIRD_HPP


#include "animal.hpp"

class Bird : public Animal{
private:
    int age;
    double x;
    double y;
    double z;

public:
    Bird();
    Bird(int age1, double x1, double y1, double z1);
    Bird (const Bird& bird);
    ~Bird();
    void move(double x1, double y1, double z1);
    void sleep();
    void eat();
    friend ostream& operator<<(ostream& os, const Bird& bird);
};


#endif //LAB4_BIRD_HPP
