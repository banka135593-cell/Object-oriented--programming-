include<iostream>
#include<cmath>
using namespacestd;
//Function declarations
intadd(inta, intb);
intsubtract(inta, intb);
intmultiply(inta, intb);
floatdivide(inta, intb);
longlongfactorial(intn);
boolisPrime(intn);
intmain() {
intchoice,a, b, n;
Do{
cout<< "\n----MATHTOOLKITLIBRARY----\n" ;
cout<< "1.Addition\n" ;
cout<< "2.Subtraction\n" ;
cout<< "3.Multiplication\n" ;
cout<< "4.Division\n" ;
cout<< "5.Power\n" ;
cout<< "6.Factorial\n" ;
cout<< "7.PrimeCheck\n" ;
cout<< "0.Exit\n" ;
cout<< "Enterchoice: ";
cin>>choice;
switch(choice) {
case1:
cout<< "Entertwonumbers: ";
cin>>a>>b;
cout<< "Result= "<<add(a,b);
break;
case2:
cout<< "Entertwonumbers: ";
cin>>a>>b;
cout<< "Result= "<<subtract(a,b);
break;
case3:
cout<< "Entertwonumbers: ";
cin>>a>>b;
cout<< "Result= "<<multiply(a,b);
break;
case4:
cout<< "Entertwonumbers: ";
cin>>a>>b;
cout<< "Result= "<<divide(a,b);
break;
case5:
cout<< "Enterbaseandpower: ";
cin>>a>>b;
cout<< "Result= "<<pow(a,b);
break;
Case6:
cout<< "Enternumber: ";
cin>>n;
cout<< "Factorial= "<<factorial(n);
break;
case7:
cout<< "Enternumber: ";
cin>>n;
if(isPrime(n )
cout<< "PrimeNumber" ;
else
cout<< "NotPrimeNumber" ;
break;
case0:
cout<< "ExitingProgram ." ;
break;
default:
cout<< "Invalidchoice!" ;
}
}while(choice !=0);
return0;
}
Functiondefinitions
intadd(inta, intb) {
returna+b;
}
intsubtract(inta, intb) {
returna
b;
}
intmultiply(inta, intb) {
returna*b;
}
floatdivide(inta, intb) {
return(float)a /b;
}
longlongfactorial(intn) {
longlongf=1;
for(int i=1; i <=n; i++)
f *=i;
returnf;
}
boolisPrime(intn) {
if(n <=1) return false;
for(int i=2; i<=sqrt(n); i++)
if(n %i ==0)
returnfalse;
returntrue;
}
