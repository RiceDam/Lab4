//
// Created by Eric Dam on 2020-10-01.
//

#ifndef LAB4_BIRD_HPP
#define LAB4_BIRD_HPP


#include "animal.hpp"

class Bird : public Animal{

public:
    Bird();
    Bird(int age1, double x1, double y1, double z1);
    Bird (const Bird& bird);
    ~Bird() override;
    void move(double x1, double y1, double z1) override;
    void sleep() override;
    void eat() override;
    friend ostream& operator<<(ostream& os, const Bird& bird);
};


#endif //LAB4_BIRD_HPP
