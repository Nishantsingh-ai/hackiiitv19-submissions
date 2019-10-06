#include<stdio.h>
#include<string.h>
void write(char str[])
{
    FILE* obj;
    obj=fopen("makeit.txt","w");
    fputs(str, obj);
    fclose(obj);
    read();
}
void read()
{
    FILE* obj;
    char read1[100];
    obj=fopen("makeit.txt","r");
    fgets(read1,100,obj);
    printf("%s",read1);
    fclose(obj);

}
void encryption1(char str[],int length)
{
    int i,temp;
    if(length%2==0)
    {
        for(i=0;i<length-2;i+=2)
        {
            temp=str[i];
            str[i]=str[i+1];
            str[i+1]=temp;
        }
    }
 else
    {
        for(i=0;i<length-2;i+=2)
        {
            temp=str[i];
            str[i]=str[i+1];
            str[i+1]=temp;
        }
    }
    write(str);
}
void encryption2(char str[],int length)
{

    for(int i=0;i<length;i++)
    {
        str[i]=str[i]+2;
    }
    write(str);
}
int main()
{

    char str[100];
    int c=0,chk=0;
    printf("Enter Data to encrypt: ");
    fgets(str,100,stdin);
    c=strlen(str);
    write(str);
    printf("\nIncreasing protection to level 1\t\t");
    encryption1(str,c);
    printf("\nPress 1 to increase protection level\t\t");
    scanf("%d",&chk);
    if(chk==1)
    {
            printf("\nIncreasing protection to level 2\t\t");
            encryption2(str,c);

        chk=0;
        printf("\nPress 1 to increase protection level\t\t");
        scanf("%d",&chk);
        if(chk==1)
        {
                printf("\nIncreasing protection to level 3\t\t");
                encryption2(str,c);

            chk=0;
            printf("\nPress 1 to increase protection level\t\t");
            scanf("%d",&chk);
                if(chk==1)
                {
                    printf("\nIncreasing protection to level 4\t\t");
                    encryption1(str,c);
                }
        }

    }
return 0;
}
