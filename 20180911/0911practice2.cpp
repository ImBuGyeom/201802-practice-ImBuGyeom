#include<iostream>
int main()
{
    
    short b; char ch; float f;
    std::cout<<"int: " << sizeof(int) <<std::endl;
    std::cout<<"short in: "<<sizeof(b)<<std::endl;
    std::cout<<"char: "<<sizeof(ch)<<std::endl;
    std::cout<<" float: "<< sizeof(f)<< std::endl;
    std::cout<<"double: "<<sizeof(double)<< std::endl;
    
    return 0;
}