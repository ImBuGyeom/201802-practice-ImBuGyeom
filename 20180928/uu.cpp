#define MAX 10
main() {
char name1[MAX] = “HANDONG";
char name2[] = "HANDONG";
char *name3 = "HANDONG";
printf("name1 = %s : length = %d, size = %d\n", name1, strlen(name1),
sizeof(name1));
printf("name2 = %s : length = %d, size = %d\n", name2, strlen(name2),
sizeof(name2));
printf("name3 = %s : length = %d, size = %d\n", name3, strlen(name3),
sizeof(name3));
}
