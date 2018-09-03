//열혈C++ 책 페이지 14쪽 

#include <iostream>

int main()
{
    int num = 20;
    std::cout << "Hello World!" << std::endl;
    std::cout << "Hello "<< "World~!" << std::endl;
    std::cout << num << ' ' << 'A' ; //A 이후에 줄바꿈이 안되었다.
    std::cout << num << ' ' << 'A' <<std::endl;
    std::cout << num << ' ' << 'A' ;
    
    std::cout << ' ' << 3.14 ;
    return 0;
    
    //내용을 수정하고 나면 g++을 해서 다시 만들어야 변경내용 실행 되는 듯..?
    // 마지막에 std::endl; 없이 << 로만 끝내도 돌아가기는 하는 듯 하다.
    
}

