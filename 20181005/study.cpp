#include<iostream>

char *pname, *bbnnaamm;
int *iname;

int main()
{
    std::cout<<sizeof(*pname)<<sizeof(pname)<<std::endl;
    std::cout<<sizeof(*bbnnaamm)<<sizeof(bbnnaamm)<<std::endl;
    std::cout<<sizeof(*iname)<<sizeof(iname)<<std::endl;
}