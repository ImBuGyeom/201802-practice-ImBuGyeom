#include <iostream>
#include<typeinfo>

int main(void)
{
    int my_code = 101;
    int my_code2 = 0;
    std::cout<<"my_code2 "<<my_code2<<std::endl;
    std::cout<<"&my_code2 "<<&my_code2<<std::endl;

    {
        int my_code2 = my_code;
        std::cout<<"my_code2_2 "<<my_code2<<std::endl;
        std::cout<<"&my_code2_2 "<<&my_code2<<std::endl;
        {
            char buf = '0';
            std::cout<<"buf"<<buf<<std::endl;
            std::cout<<sizeof(buf)<<typeid(buf).name()<<std::endl;
            buf = buf + 1;
            std::cout<<"buf"<<buf<<std::endl;
            std::cout<<sizeof(buf)<<typeid(buf).name()<<std::endl;
            std::cout<<"buf"<<int(buf)<<typeid(int(buf)).name()<<std::endl;
            
            
            
        }
        my_code2 = my_code * 100;
        std::cout<<"my_code2_2 "<<my_code2<<std::endl;
        std::cout<<"&my_code2_2 "<<&my_code2<<std::endl;
        
    }
    
    std::cout<<"my_code2 "<<my_code2<<std::endl;
    std::cout<<"&my_code2 "<<&my_code2<<std::endl;
    
    my_code = 10;
    
    
}