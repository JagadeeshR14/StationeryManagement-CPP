#include <iostream>
#include<string.h>
using namespace std;
class stationery
{
private:
string name;
int id;
string product;
float price;
int quantity;
int count=0;
public:
stationery(){
name="custumer";
id=0;
product="brand";
price=0;
quantity=0;
}
stationery(string v,int w,string x,float y,int z){
name=v;
id=w;
product=x;
price=y;
quantity=z;
}
stationery(stationery &s){
count++;
name=s.name;
id=s.id;
product=s.product;
price=s.price;
quantity=s.quantity;
}
void setn(string n){
name=n;
}
string getn(){
return name;
}
void seti(int i){
id=i;
}
int geti(){
return id;
}
void setpr(string pr){
product=pr;
}
string getpr(){
return product;
}
void setps(float ps){
price=ps;
}
float getps(){
return price;
}
void setqn(int qn){
quantity=qn;
}
int getqn(){
return quantity;
}
};
int main()
{
stationery s3("Peter",03,"Charts",15.00,50);
stationery s4("Natasha",04,"File",30.00,10);
stationery s5(s4);
stationery s1;
s1.setn("Tony");
s1.seti(01);
s1.setpr("Ball Point pen");
s1.setps(10.00);
s1.setqn(10);
std::cout<<"Details of customer 1:"
<<"\n"<<"Name of customer1 : "<<s1.getn()<<"\n"<<"Product id : "<<s1.geti()<<"\n"<<"Name of product1 : "<<s1.getpr()<<"\n"<<"Price of procuct1 : "<<"Rs."<<s1.getps()<<"\n"<<"Quantity of product1 : "<<s1.getqn()<<endl;
stationery s2;
s2.setn("Steve");
s2.seti(02);
s2.setpr("Long size note");
s2.setps(40.00);
s2.setqn(5);
std::cout<<"\n"<<"Details of customer 2:"
<<"\n"<<"Name of customer2 : "<<s2.getn()<<"\n"<<"Product id : "<<s2.geti()<<"\n"<<"Name of product2 : "<<s2.getpr()<<"\n"<<"Price of procuct2 : "<<"Rs."<<s2.getps()<<"\n"<<"Quantity of product2 : "<<s2.getqn()<<endl;
return 0;
}