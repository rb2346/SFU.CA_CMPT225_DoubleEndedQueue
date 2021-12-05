//
// Created by jayna on 6/7/2021.
//

#include "Deque.h"

int main(){
    Deque test;
    test.insert_back(4);
    test.insert_back(5);
    test.insert_back(6);
    test.insert_back(7);

    test.printForwards();
    test.printBackwards();

    Deque test2 = test;

    test2.printForwards();
    test2.printBackwards();

    Deque test3(test2);

    test3.printForwards();
    test3.printBackwards();
}
