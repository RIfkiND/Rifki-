#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<iostream.h>
#include "atas.h"
main()
{
header("HEADER");
int i,a=0;
char user[20],tum,pw[8]="Kaka1234";
ulang:
cout<<"Nama User:";gets(user);
cout<<"Password :";
for(i=0;i<=8;i++)
{tum=getch();
cout<<"*";
if (tum==pw[i])
{a=a+1;}
}
if((strcmp(user,"Rifki1")==0)&&a==8)
{
clrscr();
cout<<"        "<<user<<" Selamat Anda Telah Login "<<endl;
}
else
{
clrscr();
cout<<" FAILED TRY NEXT TIME"<<endl;
a=0;
goto ulang;
}

getch();
}