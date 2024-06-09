#include <iostream>
#include<string.h>
using namespace std;
class stationery {
private:
int numberofproduct = 5;
public:
string pr1 = "Ball point pen";
string pr2 = "Notebook";
string pr3 = "Chart";
string pr4 = "Pencil";
string pr5 = "Book";
};
class store: public stationery {
public:
void book() {
cout<<"The products in the stationery is : "<<endl;
cout<<pr1<<endl;
cout<<pr2<<endl;
cout<<pr3<<endl;
cout<<pr4<<endl;
cout<<pr5<<"\n"<<endl;;
}
};
//Run time Polymorphism using derived class.
class discount {
public:
virtual void pricediscount() {
cout<<"The stationery store has Rs.10 discount for every product !!"<<endl;
}
};
class product: public discount {
public:
void pricediscount() {
cout<<"The discount price will be discounted to the products price when you buy it !!"<<endl;
}
};
//Runtime Polymorphism with Data Members.
class pen {
public:
string color = "Black";
};
class stickpen: public pen {
public:
string color = "Blue";
};
int main() {
store s = store();
s.book();
discount * d;
discount dc;
product pr;
d = &dc;
d -> pricediscount();
pen p= stickpen();
cout<<"\n"<<p.color<<endl;
return 0;
}