#include<stdio.h>
void read()
{
    FILE* obj;
    char read1[100];
    obj=fopen("makeit.txt","r");
    fgets(read1,100,obj);
    printf("%s",read1);
    fclose(obj);

}
int main()
{
    FILE* obj;
    obj=fopen("makeit.txt","w");
    char str[100],read1[100];
    printf("Enter to print ");
    scanf("%s",str);
    fputs(str, obj);
    fclose(obj);
    read();
return 0;
}
