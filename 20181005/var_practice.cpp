#include <iostream>
int i;


int ary[5];
int var=0;


main(void){
   for (i=1; i<5; i++)
   {
       std::cout << "Enter int #" << i << ":";
       std::cin >> ary[i];
       std::cout << i << "Var:" << var << std::endl;
       //std::cout << ary[0] <<std::endl;
       //std::cout << ary[1] <<std::endl;
       //std::cout << ary[2] <<std::endl;
       //std::cout << ary[3] <<std::endl;
       //std::cout << ary[4] <<std::endl;
       //std::cout << ary[5] <<std::endl;
   }
   std::cout << "Var:" << var << std::endl;
   std::cout << ary[0] <<std::endl;
   std::cout << ary[1] <<std::endl;
   std::cout << ary[2] <<std::endl;
   
   std::cout << ary[3] <<std::endl;
   std::cout << ary[4] <<std::endl;
   std::cout << ary[5] <<std::endl;
   //std::cout << ary << std::endl;
   return(0);
}