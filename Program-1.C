#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main()
{
int a,b,d=1, m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,i;
int  c[9]={9,8,7,6,5,4,3,2,9};
int gdriver=DETECT, gmode;
initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");
line(300,200,600,200);
line(300,300,600,300);
line(400,100,400,400);
line(500,100,500,400);
jump:
re:
printf("\nSelect box for x");
scanf("%d",&a);

switch (a)
{
case (1):
{
if (m==0)
{
line(310,110,390,190);
line(390,110,310,190);
m++;
c[1]=1;
}
else
{
printf("Please select empty option");
goto re;
}
}
break;

case (2):
{
if (n==0)
{
line(410,110,490,190);
line(490,110,410,190);
++n;
c[2]=1;
}
else
{
printf("Please select empty option");
goto re;
}
}
break;

case(3):
{
if (o==0)
{
line(510,110,590,190);
line(590,110,510,190);
++o;
c[3]=1;
}
else
{
printf("Please select empty option");
goto re;
}
}
break;

case(4):
{
if (p==0)
{
line(310,210,390,290);
line(390,210,310,290);
++p;
c[4]=1;
}
else
{
printf("Please select empty option");
goto re;}
}
break;

case(5):
{
if (q==0)
{
line(410,210,490,290);
line(490,210,410,290);
++q;
c[5]=1;
}
else
{
printf("Please select empty option");
goto re;}
}
break;

case(6):
{
if (r==0)
{
line(510,210,590,290);
line(590,210,510,290);
++r;
c[6]=1;
}
else
{
printf("Please select empty option");
goto re;}
}
break;

case(7):
{
if (s==0)
{
line(310,310,390,390);
line(390,310,310,390);
++s;
c[7]=1;
}
else
{
printf("Please select empty option");
goto re;}
}
break;

case(8):
{
if (t==0)
{
line(410,310,490,390);
line(490,310,410,390);
++t;
c[8]=1;
}
else
{
printf("Please select empty option");
goto re;}
}
break;

case(9):
{
if (u==0)
{
line(510,310,590,390);
line(590,310,510,390);
++u;
c[9]=1;
}
else
{
printf("Please select empty option");
goto re;}
}
break;
default:
{
printf("Wrong selection\n");
printf("Please select correct option");
goto re;
}
}
d++;



if (c[1]==c[2] && c[1]==c[3])
{ if (c[1]==1)
   printf("\n x is winner");
   else
   printf("\n o is winner");
goto done; }

else
if (c[4]==c[5] && c[4]==c[6])
{ if (c[4]==1)
   printf("\n x is winner");
   else
   printf("\n o is winner");
goto done; }

else
if (c[7]==c[8] && c[7]==c[9])
{ if (c[7]==1)
   printf("\n x is winner");
   else
   printf("\n o is winner");
goto done; }

else
if (c[1]==c[4] && c[1]==c[7])
{ if (c[1]==1)
   printf("\n x is winner");
   else
   printf("\n o is winner");
goto done; }

else
if (c[2]==c[5] && c[2]==c[8])
{ if (c[2]==1)
   printf("\n x is winner");
   else
   printf("\n o is winner");
goto done; }

else
if (c[3]==c[6] && c[3]==c[9])
{ if (c[3]==1)
   printf("\n x is winner");
   else
   printf("\n o is winner");
goto done; }

else
if (c[1]==c[5] && c[1]==c[9])
{ if (c[1]==1)
   printf("\n x is winner");
   else
   printf("\n o is winner");
goto done; }

else
if (c[3]==c[5] && c[3]==c[7])
{ if (c[3]==1)
   printf("\n x is winner");
   else
   printf("\n o is winner");
goto done; }



if (d<6)
{
back:
printf("\nSelect box for O");
scanf("%d",&b);
switch(b)
{
case (1):
{
if (m==0)
{
circle(350,150,45);
++m;
c[1]=0;
}
else
{
printf("Please select empty option");
goto back;
}
}
break;
case (2):
{
if (n==0)
{
circle(450,150,45);
++n;
c[2]=0;
}
else
{
printf("Please select empty option");
goto back;
}
}
break;
case (3):
{
if (o==0)
{
circle(550,150,45);
++o;
c[3]=0;
}
else
{
printf("Please select empty option");
goto back;
}
}
break;
case (4):
{
if (p==0)
{
circle(350,250,45);
++p;
c[4]=0;
}
else
{
printf("Please select empty option");
goto back;
}
}
break;
case (5):
{
if (q==0)
{
circle(450,250,45);
++q;
c[5]=0;
}
else
{
printf("Please select empty option");
goto back;
}
}
break;
case (6):
{
if (r==0)
{
circle(550,250,45);
++r;
c[6]=0;
}
else
{
printf("Please select empty option");
goto back;
}
}
break;
case (7):
{
if (s==0)
{
circle(350,350,45);
++s;
c[7]=0;
}

else
{
printf("Please select empty option");
goto back;
}
}
break
;
case (8):
{
if (t==0)
{
circle(450,350,45);
++t;
c[8]=0;
}
else
{
printf("Please select empty option");
goto back;
}
}
break;
case (9):
{
if (u==0)
{
circle(550,350,45);
++u;
c[9]=0;
}
else
{
printf("Please select empty option");
goto back;
}
}
break;
default:
{
printf("Wrong selection\n");
printf("Please select correct option");
goto back;

}
}

if (c[1]==c[2] && c[1]==c[3])
{ if (c[1]==1)
   printf("\n x is winner");
   else
   printf("\n o is winner");
goto done; }

else
if (c[4]==c[5] && c[4]==c[6])
{ if (c[4]==1)
   printf("\n x is winner");
   else
   printf("\n o is winner");
goto done; }

else
if (c[7]==c[8] && c[7]==c[9])
{ if (c[7]==1)
   printf("\n x is winner");
   else
   printf("\n o is winner");
goto done; }

else
if (c[1]==c[4] && c[1]==c[7])
{ if (c[1]==1)
   printf("\n x is winner");
   else
   printf("\n o is winner");
goto done; }

else
if (c[2]==c[5] && c[2]==c[8])
{ if (c[2]==1)
   printf("\n x is winner");
   else
   printf("\n o is winner");
goto done; }

else
if (c[3]==c[6] && c[3]==c[9])
{ if (c[3]==1)
   printf("\n x is winner");
   else
   printf("\n o is winner");
goto done; }

else
if (c[1]==c[5] && c[1]==c[9])
{ if (c[1]==1)
   printf("\n x is winner");
   else
   printf("\n o is winner");
goto done; }

else
if (c[3]==c[5] && c[3]==c[7])
{ if (c[3]==1)
   printf("\n x is winner");
   else
   printf("\n o is winner");
goto done; }

goto jump;

}
printf("Draw");
done:


getch();
return 0;
}






