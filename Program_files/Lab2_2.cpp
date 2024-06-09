#include<iostream>
using namespace std;
class product{
const string stationeryName;
static float price;
int id;
string products[10];
public :
product() : stationeryName("Chennai Stationery") {}
static void getprice(){
cout << "The price of the product is : "<<"Rs."<<price<<endl;
}
product(int n){
id=n;
}
void getid()const{
cout<<"The ID of the product is : "<<id<<endl;
}
};
float product::price=100.00;
int main(){
product p;
p.getprice();
p.getid();
product::getprice();
}