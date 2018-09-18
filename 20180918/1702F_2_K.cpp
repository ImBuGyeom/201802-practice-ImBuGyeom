#include <iostream>

class Person
{
public: 
    Person(int _age)
    : age(_age)
    {
        
    }
    
    void speak() = 0;
private:
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
        std::cout << "I am "<<age<<"years old" << std::endl;
    }
};


int main()
{
    korean k1(21);
    k1.speak();
}