//
// Created by Eric Dam on 2020-10-01.
//

#include "canine.hpp"

Canine::Canine() {
    cout << "Canine is being created" << endl;
}

Canine::Canine(int age1, double x1, double y1) {
    age = age1;
    x = x1;
    y = y1;
    cout << "Canine is being created" << endl;
}

Canine::Canine(const Canine &can) {
    age = can.age;
    id = can.id;
    x = can.x;
    y = can.y;
    alive = can.alive;
    cout << "Canine is being copied" << endl;
}

void Canine::move(double x1, double y1) {
    x = x1;
    y = y1;
}

Canine::~Canine() {
    cout << "Canine is being destroyed" << endl;
}

void Canine::sleep() {
    cout << "Canine is sleeping" << endl;
}

void Canine::eat() {
    cout << "Canine is eating" << endl;
}

void Canine::hunt(Animal *a) {
    double xDif = abs(a->getX() - x);
    double yDif = abs(a->getY() - y);
    double zDif = abs(a->getZ() - z);
    if (xDif <= 1 && yDif <= 1 && zDif <= 1) {
        a->setAlive(false);
        cout << "Hunt was successful" << endl;
    } else {
        cout << "Hunt has failed" << endl;
    }
}

ostream &operator<<(ostream &os, const Canine &can) {
    os << "Canine " << "ID: " << can.id << " Age: " << can.age << " Is Alive: "
       << can.alive << " (X,Y,Z): " << can.x << " " << can.y << " " << can.z << endl;
    return os;
}
