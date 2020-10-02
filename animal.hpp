//
// Created by Eric Dam on 2020-09-29.
//

#ifndef LAB4_ANIMAL_HPP
#define LAB4_ANIMAL_HPP
#include <iostream>

using namespace std;

class Animal {
private:
    long id;
    int age;
    bool alive;
    double x;
    double y;
public:
    static long counter;
    Animal();
    Animal(int age1, double x1, double y1);
    void move(double x1, double y1);
    Animal(const Animal& ani);
    virtual ~Animal();
    virtual void sleep();
    virtual void eat();
    void setAlive(bool isAlive);
    friend ostream& operator <<(ostream& os, const Animal& ani);
};


#endif //LAB4_ANIMAL_HPP
