#include<iostream>  //iostream이라는 헤더파일 불러옴

main()  //시작부분
{
    int a[10] = {1,2,3,4,5,6,7,8,9,0}; //1~0 array 생성
    int *pa, i;  //pointer pa, int i 생성
    
    pa = a;  //a의 시작위치를 pa에 정의해줌
    
    for (i=0; i<10; i++)  //i가 0~9일 때 for문 실행
    {
        std::cout<<"a["<<i<<"] = "<<*(a+i);  //i에 따른 a값 
        std::cout<<", *(pa+"<<i<<") = "<<*(pa++)<<std::endl; //i에 따른 pa값
        
        
    }
}