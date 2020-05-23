#include "stdio.h"
#include "conio.h"
 
void main()
{
    char a1[10],a2[10],a3[20];
    char *p1,*p2,*p3;
    int dem,len3=0;
    printf("Nhap chuoi 1:");
    fflush(stdin);gets(a1);
    printf("Nhap chuoi 2:");
    fflush(stdin);gets(a2);
    p1=a1;p2=a2;p3=a3;
    dem=0;
    while(*(p1+dem)!='\0')
        *(p3+len3++)=*(p1+dem++);
    *(p3+len3)='\0';
    dem=0;
    while(*(p2+dem)!='\0')
        *(p3+len3++)=*(p2+dem++);
    *(p3+len3)='\0';
    printf("Chuoi noi:%s",a3);
    
}
