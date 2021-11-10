//define member function outside the class:
//syntax:return type class name::function name(list of arguments)-----
//write a c++ program to find area of rectangle:
#include<iostream>
using namespace std;
class rectangle
{
	private:
		int l,b;
	public:
		void get();
		void area();
};
void rectangle::get()
{
	cout<<"enter length and breadth";
	cin>>l>>b;
}
void rectangle::area()
{
	cout<<"area="<<l*b;
}
int main()
{
	rectangle r;
	r.get();
	r.area();
	return 0;
}

/*output
enter length and breadth 7 2
area=14*/
