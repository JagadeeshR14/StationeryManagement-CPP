#include<iostream>
using namespace std;
const int SIZE = 3;
class stationery {
private:
float wholesaleprice;
float mrp;
float offerprice;
int quantity[SIZE];
public:
stationery(){
wholesaleprice = 0;
mrp = 0;
offerprice = 0;
int i;
for(i=0; i<SIZE; i++){
quantity[i] = i+1;
}
}
void operator[](int i) {
if( i>SIZE ) {
cout<<"Invalid Element"<<endl;
return;
}
cout << quantity[i-1];
}
stationery(float w,float m,float o){
wholesaleprice = quantity[0]=w;
mrp = quantity[1]=m;
offerprice =quantity[2]= o;
}
stationery operator--() {
wholesaleprice--;
mrp--;
offerprice--;
return stationery(wholesaleprice, mrp, offerprice);
}
stationery operator++() {
wholesaleprice++;
mrp++;
offerprice++;
return stationery(wholesaleprice, mrp, offerprice);
}
friend stationery operator+(stationery s1,stationery s2);
friend ostream &operator<<( ostream &output, stationery &s);
friend istream &operator>>( istream &input, stationery &s);
void display() {
cout <<"Wholesaleprice :" <<wholesaleprice <<"\n" <<"MRP :" <<mrp <<"\n" <<"Offerprice :"
<<offerprice <<endl;
}
stationery operator()(float x, float y, float z) {
stationery s;
s.wholesaleprice = x + z - 5.00;
s.mrp = y + z - 5.00;
s.offerprice = x + y - 5.00;
return s;
}
};
stationery operator+(stationery s1,stationery s2) {
stationery price;
price.wholesaleprice = s1.wholesaleprice + s2.wholesaleprice;
price.mrp = s1.mrp + s2.mrp;
price.offerprice = s1.offerprice + s2.offerprice;
return price;
}
ostream &operator<<( ostream &output, stationery &s) {
output <<"Wholesaleprice :" <<s.wholesaleprice <<"\n" <<"MRP :" <<s.mrp <<"\n" <<"Offerprice :" <<s.offerprice <<endl;
return output;
}
istream &operator>>( istream &input, stationery &s) {
input >>s.wholesaleprice >>s.mrp >>s.offerprice;
return input;
}
int main() {
stationery s1(15.00,25.00,20.00);
stationery s2(40.00,55.00,50.00);
stationery s3,s4;
stationery s5(25.00,45.00,40.00),s6;
--s1;
s1.display();
s1[2];
--s2;
s2.display();
++s1;
s1.display();
++s2;
s2.display();
cout<<"\n"<<"S3 :"<<endl;
s3 = s1+s2;
s3.display();
cout<<"\n"<<"S4 :"<<endl;
cin>>s4;
cout<<s4;
cout<<"\n"<<"S5 :"<<endl;
s5.display();
s6 = s5(10.00,10.00,10.00);
cout<<"\n"<<"S6 :"<<endl;
s6.display();
cout <<"\n"<< "Value of A[2] : " ;
s1[2];
cout <<endl<<"Value of A[5] : " ;
s1[5];
cout<<"Value of A[12] : " ;
s1[12];
getchar();
return 0;
}