#include<iostream.h>
#include<conio.h>
int main()
{
int d1,d2,m1,m2,y1,y2;
int nd,nm,ny;
clrscr();
cout<<"enter your date of birth\n";
cout<<"date\n";
cin>>d1;
cout<<"month\n";
cin>>m1;
cout<<"year\n";
cin>>y1;
cout<<"enter pergent date \n";
cout<<"date\n";
cin>>d2;
cout<<"month\n";
cin>>m2;
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
cout<<ny<<"year";
getch();
return 0;
}


