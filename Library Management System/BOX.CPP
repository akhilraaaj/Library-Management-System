#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<iomanip.h>

void box(int c1,int r1,int c2,int r2)
{
	int c, r;
	char hl=196, vl=179, cr1=218, cr2=191, cr3=192, cr4=217;
	for(c=c1; c<=c2; ++c)
	{
		gotoxy(c, r1); cout<<hl;
		gotoxy(c, r2); cout<<hl;
	}
	for(r=r1; r<=r2; ++r)
	{
		gotoxy(c1, r); cout<<vl;
		gotoxy(c2, r); cout<<vl;
	}
	gotoxy(c1, r1); cout<<cr1;
	gotoxy(c2, r1); cout<<cr2;
	gotoxy(c1, r2); cout<<cr3;
	gotoxy(c2, r2); cout<<cr4;
}

void input(int r, int c, char st[])
{
	gotoxy(c, r); cout<<st;
}