#include<iostream>

int main()

{
    
    int num1[5] = {1,2,3,4,5};
    int num2[5] = {6,7,8,9,10};
    
    int *p1 = num1;
    int *p2 = num2;
    
    
    std::cout<<"length of num1 = " << sizeof(num1)/sizeof(int)<<std::endl;
    std::cout<<"length of num2 = " << sizeof(num2)/sizeof(int)<<std::endl;
    std::cout<<"length of num1 = " << sizeof(num1)<<std::endl;
    std::cout<<"length of num2 = " << sizeof(num2)<<std::endl;
    std::cout << num1[4]<<std::endl;
    std::cout << num2[4]<<std::endl;
    
    num1[4] = num2[4];
    
    
    
    std::cout << *p1<<std::endl;
    std::cout << *p2<<std::endl;
    
    return 0;
    
    
}