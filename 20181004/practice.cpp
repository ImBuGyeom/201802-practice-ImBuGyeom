#include<iostream>
#include<sstream>
#include<fstream>
#include<string>

int main()
{//A1

    std::stringstream sstream;
    std::string str = "test";
    {//B1
        //A1 valid    
        sstream << str << "30" << std::endl;
        std::string str = "test";
        str += "30";
        std::cout << str << std::endl;
    }//B1 destroyed , deleted
    
    //위 아래 메모리 공간 분리. space 생성하고 나눔. 
    {//B2
        //A1 valid
        //B1 not valid
        
    }//B2 destroyed, deleted.
    
    
    //std::string str = "test"; //string type object 생성
    std::cout << str << std::endl;  
    //clang++ practice.cpp  -> compile
    
    
    //char pointer array 변수 만들고 new 해서 메모리 할당, char [] 메모리 할당, 복사 해야 했는데
    //string이라는 객체 하나만 만들어서 다 처리함. 
    std::cout << sstream.str() << std::endl;
    return 0;
}