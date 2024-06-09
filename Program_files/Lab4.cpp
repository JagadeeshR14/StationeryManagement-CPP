#include <iostream>
#include <string.h>
using namespace std;
// Function Template
template <typename X>
X fmax(X &a,X &b)
{
if(a<b){
return b;
}
else{
return a;
}
}
// Function Templates with Multiple Parameters
template <typename X,typename Y>
void mfun(X a,Y b){
cout<<"Number of pens in pack : "<<a<<"\n"<<"Price of the single pen in the pack is : "<<b<<"\n"<<"Total price of the pack is : "<<a*b<<"\n"<<endl;
}
// Overloading a Function Template
template <typename X> void ovrld(X a){
cout<<"Number of packs avaliable in stationery : "<<a<<endl;
}
template <typename X,typename Y,typename Z> void ovrld(X b ,Y c,Z d){
cout<<"Number of packs sold : "<<b<<endl;
cout<<"Price of the single pack : "<<c<<endl;
cout<<"Remaining packs in stationery : "<<d<<"\n"<<endl;
}
// Class Template
template <class X>
class P {
public:
X pack = 14;
X pen = 5;
X sold = 6;
void max()
{
cout<<"Total number of pens in the stationery : "<<pack*pen<<endl;
cout<<"Number of pens sold : "<<sold*pen<<endl;
cout<<"Remaining pens in the stationery : "<<(pack-sold)*pen<<"\n"<<endl;
}
};
// Class Templates with multiple parameters
template<class X1, class X2,class X3,class X4>
class Q {
X1 pack;
X2 pen;
X3 sold;
X4 price;
public:
Q(X1 m,X2 n,X3 o,X4 p){
pack = m;
pen = n;
sold = o;
price = p;
}
void display(){
cout<<"Amount by selling "<<sold*pen<<" pens : "<<(sold*pen)*price<<endl;
cout<<"Price of remaining pens in the stationery : "
<<(pack-sold)*pen*price<<endl;
}
};
int main(){
float x = 5.00; // Price of first pen
float y = 10.00; // Price of second pen
cout<<"The maximum price of pen is : "<<fmax(x,y)<<"\n"<<endl;
mfun(5,10.00);
ovrld(14);
ovrld(6,50.00,8);
P<int>s;
s.max();
Q<int,int,int,float> d(14,5,6,10);
d.display();
return 0;
}