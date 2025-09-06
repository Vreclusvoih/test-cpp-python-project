#include <iostream>

class Foo
{
private:
    int m_x{};
    int m_y{};
public:
    Foo(int x)
        : m_x{ x }
    {
    }

    int getX() const { return m_x; }
};

void printFoo(Foo f) // has a Foo parameter
{
    std::cout << f.getX();
}

int main()
{
    Foo OLEG{12};

    printFoo(OLEG); // we're supplying an int argument

    return 0;
}