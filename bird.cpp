//
// Created by Eric Dam on 2020-10-01.
//

#include "bird.hpp"

Bird::Bird() {
    age = 0;
    x = 0;
    y = 0;
    z = 0;
}

Bird::Bird(int age1, double x1, double y1, double z1) {
    age = age1;
    x = x1;
    y = y1;
    z = z1;
}

Bird::Bird(const Bird &bird) {
    age = bird.age;
    x = bird.x;
    y = bird.y;
    z = bird.z;
}

Bird::~Bird() {
    cout << "Bird is being destroyed" << endl;
}

void Bird::move(double x1, double y1, double z1) {
    x = x1;
    y = y1;
    z = z1;
}

void Bird::sleep() {
    cout << "Bird is sleeping" << endl;
}

void Bird::eat() {
    cout << "Bird is eating" << endl;
}

ostream &operator<<(ostream &os, const Bird& bird) {
    cout << "Bird " << " Age: " << bird.age << " (X,Y,Z): " << bird.x
    << " " << bird.y << " " << bird.z << endl;
    return os;
}
