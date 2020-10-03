//
// Created by Eric Dam on 2020-10-01.
//

#ifndef LAB4_CANINE_HPP
#define LAB4_CANINE_HPP
#include "animal.hpp"

class Canine: public Animal {

public:
    Canine();
    Canine(int age1, double x1, double y1);
    Canine(const Canine& can);
    void move(double x1, double y1) override;
    ~Canine() override;
    void sleep() override;
    void eat() override;
    void hunt(Animal *a);
    friend ostream& operator<<(ostream& os, const Canine& can);
};


#endif //LAB4_CANINE_HPP
