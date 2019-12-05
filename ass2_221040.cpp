#include<iostream>
#include<cmath>
using namespace std;

class com
{
private:
      int real,img;
      
public:
     com(int r=0, int i=0)
     {
     real=r;
     img=i;
     }
     void print()
     {
      cout<<real<<"+"<<img<<"i"<<endl;
     };
com operator + (com const &obj)
{
com res;////created object as res of com///
res.real=real + obj.real;
res.img=img + obj.img;
return res;
} 
com operator * (com const &obj)
{
com res;
res.real=real*obj.real-img*obj.img;
res.img=real*obj.img + img*obj.real;
return res;
} 
};
int main()
{
int a,b,c,d;
cout<<"Enter real part of first number";
cin>>a;
cout<<"Enter imaginary part of first number";
cin>>b;
cout<<"Enter real part of second number";
cin>>c;
cout<<"Enter imaginary part of second number";
cin>>d;
com c1(a,b), c2(c,d),c3,c4;
c3= c1+c2;
c3.print();
c4=c1*c2;
c4.print();
return 0;
} 
