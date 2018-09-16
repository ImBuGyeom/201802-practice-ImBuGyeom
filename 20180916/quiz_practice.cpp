#include<iostream>


int main(void)
{
    int idx; std::cout<<"idx_01: "<<idx<<"&idx_01: "<<&idx<<std::endl;
    for(idx = 0; idx < 2; idx ++)
    {
        std::cout<<"idx_02: "<<idx<<std::endl;
        std::cout<<"&idx_02: "<<&idx<<std::endl;
        for(int i = 0; i < 2; i ++)
        {
            std::cout<<"idx_05: "<<idx<<std::endl;
            std::cout<<"&idx_05: "<<&idx<<std::endl;
            
            std::cout<<"i_05: "<<i<<std::endl;
            std::cout<<"&i_05: "<<&i<<std::endl;
            
            std::cout<<i*idx<<std::endl;
        }   std::cout<<"idx_08: "<<idx<<std::endl; 
        
    }   std::cout<<"idx_09: "<<idx<<"&idx_09: "<<&idx<<std::endl;
    
    std::cout<<"idx_10: "<<idx<<"&idx_10: "<<&idx<<std::endl;
    
} //  std::cout<<"idx_08: "<<idx<<std::endl;