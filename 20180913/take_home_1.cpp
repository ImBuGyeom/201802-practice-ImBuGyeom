#include <iostream>

int main(void)
{
    
    int my_code = 101;
    int my_code2 = 0;
    
    std::cout<<"my_code "<<my_code<<std::endl;
    std::cout<<"my_code2 "<<my_code2<<std::endl;
    {
        int my_code2 = my_code;
        my_code = my_code +1;
        std::cout<<"my_code "<<my_code<<std::endl;
        std::cout<<"my_code2_2 "<<my_code2<<std::endl;
        
    }
    my_code = 10;
    std::cout<<"my_code "<<my_code<<std::endl;
    


}