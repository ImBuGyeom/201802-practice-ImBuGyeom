#include<iostream>

int main()
{
    int num1[2][3] = {{1,2,3}, {7,8,9}};
    int num2[2][3] = {4,5,6,1,3,9};
    
    
    for (int y = 0; y<2; y++)
    {
        for (int x = 0; x<3; x++)
        {
            std::cout<<x<<" "<<y<<" "<<num1[y][x]<<std::endl;
        }
    }
    
    for (int y = 0; y<2; y++)
    {
        for (int x = 0; x<3; x++)
        {
            std::cout<<x<<" "<<y<<" "<<num2[y][x]<<std::endl;
        }
    }
    
    return 0;
    
}