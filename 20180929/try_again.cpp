#define MAX 10000

main()
{
    char name1[MAX] = "HANDONG";
    char name2[] = "HANDONG";
    char *name3 = "HANDONG";
  

    std::cout<<"name1 = "<< name1 <<" : length = "<<strlen(name1)<<" size = "<< sizeof(name1)<<std::endl;
    std::cout<<"name2 = "<< name2 <<" : length = "<<strlen(name2)<<" size = "<< sizeof(name2)<<std::endl;
    std::cout<<"name3 = "<< name3 <<" : length = "<<strlen(name3)<<" size = "<< sizeof(name3)<<std::endl;

}

//printf("name3 = %s : length = %d, size = %d\n", name3, strlen(name3), sizeof(name3));

