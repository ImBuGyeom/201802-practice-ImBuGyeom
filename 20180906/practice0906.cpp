#include <iostream> /*io stram
//# means predefined macro. 전처리기. 프로그램 실행 전 가장먼저 처리함.
//꺾쇠; 글로벌. 광역. global.  ""; local
//in system level. 따라서 같은 폴더에 없어도 실행됨. 주로 표준
//"" 일때는 현재 디렉토리에 있는애 찾아감. 개인, 기업 



*/
//int; return value.
//void,, 공집합. return value 없다.
int fact(int num)  //fx define
{
    if(num ==1)
        return 1;
    else
        return fact(num-1)*num;
}


//모든 프로그램은 엔트리 포인트 필요. OS가 우리 프로그램 호출하는 것.
//모든 프로그램은 메인 있어야햠.
//파이썬은 프로그램 자체에 메인이 내장돼있음. 
int main()
{
    int num;
    std::cout << "Enter a number:"; //std::cout; 화면에 표시
    //std; standard namespace. 표준. ::; 소유권.~의.~에 있는.
    //cout; console out.
    std::cin >> num;
    std::cout << fact(num) << std::endl;
    