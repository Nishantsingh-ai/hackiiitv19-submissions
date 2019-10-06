#include<stdio.h>
#include<string.h>
int decryption1(char str[],int k)
{
int i;
for(i=0;i<k;i++)
{
str[i]=str[i]-2;
}
}
 int decryption2(char str[200],int k)
{
int i,temp;
if(k%2==0)
 {
     for(i=0;i<k;i+=2)
    {
     temp=str[i];
     str[i]=str[i+1];
     str[i+1]=temp;
    }
 }
 else
 {
     for(i=0;i<k-1;i+=2)
    {
     temp=str[i];
     str[i]=str[i+1];
     str[i+1]=temp;
    }
 }
 }

int main()
{
int length,lvl;
FILE* obj;
char data[100];
obj=fopen("makeit.txt","r");
fgets(data,100,obj);
printf("\nEnter Password for Security Level : ");
scanf("%d",&lvl);
length=strlen(data);
switch(lvl)
{
case 1:
        decryption2(data,length);
        printf("Decrypted code:%s\n",data);
        break;
case 2:
        decryption1(data,length);
        decryption2(data,length);
        printf(" Decrypted code: %s\n",data);
        break;
case 3:
        decryption1(data,length);
        decryption1(data,length);
        decryption2(data,length);
        printf(" Decrypted code: %s\n",data);
        break;
case 4:
        decryption2(data,length);
        decryption1(data,length);
        decryption1(data,length);
        decryption2(data,length);
        printf(" Decrypted code: %s\n",data);
        break;
default: printf("\n Enter correct password.");
}
fclose(obj);
}
