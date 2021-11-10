//write a c++ program to read and print a value using class:
#include<iostream>
using namespace std;
class sample
{
	private:
		int x;
	public:
	    void get()
		{
			cout<<"enter x value";
			cin>>x;
			}	
		void show()
		{
			cout<<"value of x is"<<x;
			}	
};
int main()
{
	sample s;
	s.get();
	s.show();
	return 0;
}
 
 /*output
 enter x value 7
value of x is7*/
