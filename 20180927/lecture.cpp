#include<iostream>

void func(int a)   //3
{
    a = 10;        //4
}

int main()
{
    int a = 20;  //1
    func(a);     //2
}                //5

/*
    identifier  address      space      interpretation

1       a       A1         4byte int          20

2    func(a)    
    func(20*)
    -> 3
        id      add         spce            intprettion
        a       B1          4bytes int      a(B1)=20*; -> 20
        pass by value  / arg 를 파라의 밸류로 줌.
        
3

4       a       B1          4               10

5       3번의 테이블 전부 사라짐.

*/