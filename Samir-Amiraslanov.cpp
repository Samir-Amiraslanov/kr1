#include <iostream>
using namespace std;

class Point{
private:
double x=0,y=8;
public:
void cons1(){
x=0; y=0;
}

void cons2(double a, double b){
x=a; y=b;
}
void set_x(double a){x=a; }
void set_y(double a){y=a; }
double get_x(){return x;}
double get_y(){return y;}
void show(){
	cout<<x<<" "<<y<<endl;}
};
class Triangle{
private:
Point q,w,e;
public:
void consT1(){
	
	 
	

}
	
	
	
		
};


int main (){
Point a,b,c,d;
a.cons1();
a.show();
b.cons2(5,4);
b.show();
c.set_y(2);
c.set_x(3);
c.show();
d.get_x();
d.get_y();
d.show();
Triangle r;
r.consT1();
}
