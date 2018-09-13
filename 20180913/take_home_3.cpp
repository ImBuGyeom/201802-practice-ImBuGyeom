#include <iostream>

int idx;

int main(void)
{
    for(idx = 0; idx < 2; idx++)
    {
        for(int i = 0; i < 2; i++)
        {
            //std::cout << i * idx << std::endl;
            
            std::cout<<"idx "<<idx<<std::endl;
            std::cout<<"i "<<i<<std::endl;
            std::cout<<"&i "<<&i<<std::endl;
        }
        //std::cout<<&i<<std::endl;
    }
}