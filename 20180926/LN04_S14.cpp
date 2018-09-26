#include<iostream>

int main()

{
    
    int a[10] = {1,2,3,4,5,6,7,8,9,0};
    
    int *pa;
    
    for (int i = 0; i < 10; i++)
    {
        
        std::cout<<"a "<< i<< " = " << *(a+i)<<std::endl;
        std::cout<<"(pa + "<< i << ") = " <<((*pa++))<<std::endl;
        
        
    }
    
    return 0;
}