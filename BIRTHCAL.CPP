/*****pulish as gpl 2.
all copy right reseved to rakesh kumar gupta*******/
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
int main()
{
int d1,d2,m1,m2,y1,y2;
int nd,nm,ny;
char another;
clrscr();
do
{
cout<<"enter your date of birth\n";
l1:
cout<<"date\n";
cin>>d1;
if(d1>31)
{
cout<<"day value can not more than 31 please try again\n";
goto l1;
}
l2:
cout<<"month\n";
cin>>m1;
if(m1>12)
{
cout<<"month value can not more than 12 please try again\n";
goto l2;
}
cout<<"year\n";
cin>>y1;
cout<<"enter pergent date \n";
l3:
cout<<"date\n";
cin>>d2;
if(d2>31)
{
cout<<"day value can not more than 31 pleast try again\n";
goto l3;
}
l4:
cout<<"month\n";
cin>>m2;
if(m2>12)
{
cout<<"month value can not more than 12 pleast try again\n";
goto l4;
}

cout<<"year\n";
cin>>y2;
//logic apply from here
if(m2<m1)
{
m2=m2+12;
y2=y2-1;
ny=y2-y1;
}
else
{
ny=y2-y1;
}
if(d2<d1)
{
d2=d2+31;
m2=m2-1;
nm=m2-m1;
}
else
{
nm=m2-m1;
}
nd=d2-d1;
cout<<"your are\n";
cout<<nd<<"Day";
cout<<nm<<"moth";
cout<<ny<<"year\n";
cout<<"<want to calculate more age 'y' or 'n' \n";
fflush(stdin);
cin>>another;
}
while(another=='y');

getch();
return 0;
}


