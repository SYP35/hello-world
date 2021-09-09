#include <iostream>

struct Foo {
    int n;
    
    Foo() {
        std::cout << "static constructor\n";
    }

    ~Foo() {
        std::cout << "static destructor\n";
    }
};

Foo f;

int main()
{
    std::cout << "main function\n";
    std::cout << "sypdev";
    std::cout << "sypdev";
}

