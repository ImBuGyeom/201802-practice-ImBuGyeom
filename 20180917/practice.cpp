#include<iostream>

#include<fstream>

void print_function(std::ostream & out)
{
    char buf = '0';
    int a = 49;

    out << buf << ", "<<a << std::endl;   
}

int main()
{   
    
    std::ofstream fout;
    fout.open("test.log");
    
    char buf = '0';
    int a = 49;

    print_function(std::cout);
    print_function(fout);

    //std::cout << buf << ", "<<a << std::endl;
    //별도의 명령어나 조건 없이 다른 타입의 변수를 한번에 받을 수 있다. 
    //폴리몰피즘
    return 0;


}