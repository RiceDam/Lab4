#include <iostream>
#include "animal.hpp"
#include "canine.hpp"
#include "bird.hpp"

int main() {
    Animal *a = new Animal();
    Animal *b = new Bird();
    Animal *c = new Canine();

    std::cout << *a;
    std::cout << *b;
    std::cout << *c;

    a->move(1, 2);
    b->move(1, 2, 3);
    c->move(2, 3);

    std::cout << *a;
    std::cout << *b;
    std::cout << *c;

    a->sleep();
    a->eat();
    b->sleep();
    b->eat();
    c->sleep();
    c->eat();

    Canine *can = dynamic_cast<Canine*>(c);
    can->hunt(a);

    return 0;
}
