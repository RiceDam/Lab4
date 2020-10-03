//
// Created by Eric Dam on 2020-10-01.
//

#include "bird.hpp"

Bird::Bird() {
    cout << "Bird is being created" << endl;
}

Bird::Bird(int age1, double x1, double y1, double z1) {
    age = age1;
    x = x1;
    y = y1;
    z = z1;
    cout << "Bird is being created" << endl;
}

Bird::Bird(const Bird &bird) {
    id = bird.id;
    age = bird.age;
    x = bird.x;
    y = bird.y;
    z = bird.z;
    alive = bird.alive;
    cout << "Bird is being copied" << endl;
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
    os << "Bird " << "ID: " << bird.id << " Age: " << bird.age << " Is Alive: "
       << bird.alive << " (X,Y,Z): " << bird.x << " " << bird.y << " " << bird.z << endl;
    return os;
}
