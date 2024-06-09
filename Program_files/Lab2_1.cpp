#include<iostream>
using namespace std;
class stationery
{
private:
string name;
int id;
string prod;
float pri;
int quan;
public:
stationery(string n,int i,string p,float pi,int q){
name=n;
id=i;
prod=p;
pri=pi;
quan=q;
}
void check(int i)
{
cout<<"\n"<<"The stationery details of id"<<id<<":"<<"\n"<<name<<"\n"<<prod<<"\n"<<"Rs."<<pri<<"\n"<<quan<<endl;
}
void check(string p)
{
cout<<"\n"<<"The product details of "<<prod<<" :"<<"\n"<<"Rs."<<pri<<"\n"<<name<<"\n"<<id<<"\n"<<quan<<endl;
}
void check(string p,float pi)
{
cout<<"\n"<<"The bought details of product "<<prod<<"\t"<<"Rs."<<pri<<" :"<<"\n"<<quan<<endl;
}
void display()
{
cout<<"\n"<<"The coustomer Details :"<<"\n"<<endl;
cout<<"ID : "<<id<<"\n"<<endl;
cout<<"NAME : "<<name<<"\n"<<endl;
cout<<"PRODUCT : "<<prod<<"\n"<<endl;
cout<<"PRICE : "<<"Rs."<<pri<<"\n"<<endl;
cout<<"QUANTITY : "<<quan<<endl;
}
};
int main()
{
stationery s1("Peter",11,"Ink bottle",45.50,1);
stationery s2("Tony",12,"File",7.00,5);
stationery s3("Bruce",13,"Notebook",30.00,2);
stationery s4("Odin",14,"Ball point pen",10.00,10);
s1.check(11);
s2.check("File");
s3.check("Notebook",30.00);
s4.display();
}