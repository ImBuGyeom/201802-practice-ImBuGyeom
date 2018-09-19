#include <iostream>

class Person
{
public: 
    Person(int _age)
    : age(_age)
    {
        
    }
    
    void speak() = 0;
public:
    int age;
};

class Korean
{
public:
    Korean(int age)
    :Person(age)
    {
        
    }
public:
    virtual void speak()
    {
        std::cout << "nae naineun " << age << " sal ibnida." << std::endl;
    }
};

class American : public Person
{
public: 
    American(int age)
    :Person(age)
    {
        
    }

public: 
virtual void speak()
    {
        std::cout << "I am " << age << " years old." << std::endl;
    }
};

int main()
{
    Korean k1(21);
    American a1(21);
    k1.speak();
    a1.speak();
    return 0;
}