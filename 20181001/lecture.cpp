#include<iostream>

main(){

    char str_name1[6] = "string";
    char str_name2[] = "string";
    char *pname = "string";
    
    std::cout<<str_name1<<std::endl;
    std::cout<<str_name2<<std::endl;
    std::cout<<*pname<<std::endl;
    std::cout<<strlen(str_name1)<<std::endl;
    std::cout<<strlen(str_name2)<<std::endl;
    

}