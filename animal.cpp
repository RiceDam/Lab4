//
// Created by Eric Dam on 2020-09-29.
//

#include "animal.hpp"
long Animal::counter = 0;
Animal::Animal() {
    id = counter++;
    alive = true;
    age = 0;
    x = 0;
    y = 0;
}

Animal::Animal(int age1, double x1, double y1) {
    id = counter++;
    alive = true;
    age = age1;
    x = x1;
    y = y1;
}

void Animal::move(double x1, double y1) {
    x = x1;
    y = y1;
}

ostream &operator<<(ostream &os, const Animal &ani) {
    os << "ID: " << ani.id << " Age: " << ani.age << " Is Alive: " << ani.alive << " (X,Y): " << ani.x << " " << ani.y;
    return os;
}

void Animal::sleep() {
    cout << "Animal is sleeping" << endl;
}

void Animal::eat() {
    cout << "Animal is eating" << endl;
}

void Animal::setAlive(bool isAlive) {
    alive = isAlive;
}

Animal::Animal(const Animal & ani) {
    id = ani.id;
    age = ani.age;
    alive = ani.alive;
    x = ani.x;
    y = ani.y;
}

Animal::~Animal() {
    cout << "Destructing Animal" << endl;
}
