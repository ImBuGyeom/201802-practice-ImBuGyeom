#include <iostream>

int factorial(int a);

int main()
{
    int a, result;
    
    std::cout<<"input: "<<std::endl;
    std::cin>>a;
    
    if(a>=0)
    {
        result = factorial(a);
        std::cout<<a<<"!="<<result<<std::endl;
    }
    else
    {
        std::cout<<"ERROR: negative integer"<<std::endl;
        
    }
        
    
}

int factorial(int a)
{
    int i;
    int result = 1;
    
    for(i=1; i<=a; i++)
        result = result*i;
        
    return result;
}