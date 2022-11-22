// this program will tell you two typs of ashes 1) sulphated ash 2) acid insoluable 
// note that acid insoluable ash is always less then sulphated ash 
/*A = empty pod              66.1234
B =  sample weight           2.5678
C = samp+pod (before)        68.6912
D = weight of ash            
E = samp+pod (after)
F = ash %age                 1.23
G = weight of acid insoluable ash 
H = empty pod+acid insoluable
I = %age of acid insoluable*/

#include<stdio.h>
int main()
{
float a,b,c,d,e,f,g,h,i;
printf("enter the empty pod weight\n: ");
scanf("%f",&a);
printf("enter the sample weight\n: ");
scanf("%f",&b);
printf("enter wanted ash percentage\n: ");
scanf("%f",&f);
c = a+b;
printf("pod+smp weight is %f\n",c);
d = (f*b)/100;
printf(" weight of as is %f\n",d);
e = d+a;
printf("ash+pod weight is %f\n",e);
printf("enter insoluable ash percentage: ");
scanf("%f",&i);
g = (i*b)/100;
printf("weight of insoluable ash is %f\n",g);
h = g+a;
printf("pod+insoluable ash is %f\n",h);
return 0;
}
