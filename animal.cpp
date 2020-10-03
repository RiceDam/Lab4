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
    z = 0;
    cout << "Animal is being created" << endl;
}

Animal::Animal(int age1, double x1, double y1) {
    id = counter++;
    alive = true;
    age = age1;
    x = x1;
    y = y1;
    z = 0;
    cout << "Animal is being created" << endl;
}

void Animal::move(double x1, double y1)  {
    x = x1;
    y = y1;
}
void Animal::move(double x1, double y1, double z1) {
    x = x1;
    y = y1;
}

ostream &operator<<(ostream &os, const Animal &ani) {
    os << "Animal " << "ID: " << ani.id << " Age: " << ani.age << " Is Alive: "
    << ani.alive << " (X,Y,Z): " << ani.x << " " << ani.y << " " << ani.z << endl;
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
    cout << "Animal is being copied" << endl;
}

Animal::~Animal() {
    cout << "Destructing Animal" << endl;
}

int Animal::getAge() {
    return age;
}

long Animal::getID() {
    return id;
}

bool Animal::getAlive() {
    return alive;
}

double Animal::getX() {
    return x;
}

double Animal::getY() {
    return y;
}

double Animal::getZ() {
    return z;
}

void Animal::setAge(int age) {
    Animal::age = age;
}

void Animal::setId(long id) {
    Animal::id = id;
}

void Animal::setX(double x) {
    Animal::x = x;
}

void Animal::setY(double y) {
    Animal::y = y;
}

void Animal::setZ(double z) {
    Animal::z = z;
}
