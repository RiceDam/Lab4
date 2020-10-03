//
// Created by Eric Dam on 2020-09-29.
//

#ifndef LAB4_ANIMAL_HPP
#define LAB4_ANIMAL_HPP
#include <iostream>

using namespace std;

class Animal {
protected:
    int age;
    long id;
    bool alive;
    double x;
    double y;
    double z;
public:
    static long counter;
    Animal();
    Animal(int age1, double x1, double y1);
    virtual void move(double x1, double y1);
    virtual void move (double x1, double y1, double z1);
    Animal(const Animal& ani);
    virtual ~Animal();
    virtual void sleep();
    virtual void eat();
    void setAlive(bool isAlive);
    friend ostream& operator <<(ostream& os, const Animal& ani);
    int getAge();
    long getID();
    bool getAlive();
    double getX();
    double getY();
    double getZ();
    void setAge(int age);
    void setId(long id);
    void setX(double x);
    void setY(double y);
    void setZ(double z);
};


#endif //LAB4_ANIMAL_HPP
