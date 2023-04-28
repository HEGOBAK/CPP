/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchu <jchu@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:57:05 by jchu              #+#    #+#             */
/*   Updated: 2023/04/28 15:57:23 by jchu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <iostream>

class Base {
public:
    virtual ~Base() {}
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base* generate() {
    srand(time(nullptr));
    int r = rand() % 3;

    if (r == 0) {
        return new A();
    } else if (r == 1) {
        return new B();
    } else {
        return new C();
    }
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p)) {
        std::cout << "A\n";
    } else if (dynamic_cast<B*>(p)) {
        std::cout << "B\n";
    } else if (dynamic_cast<C*>(p)) {
        std::cout << "C\n";
    }
}

void identify(Base& p) {
    if (typeid(p) == typeid(A)) {
        std::cout << "A\n";
    } else if (typeid(p) == typeid(B)) {
        std::cout << "B\n";
    } else if (typeid(p) == typeid(C)) {
        std::cout << "C\n";
    }
}

int main() {
    Base* b = generate();
    identify(b);
    identify(*b);
    delete b;

    return 0;
}
