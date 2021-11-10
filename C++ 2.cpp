//write a c++ program to print details of an employee:
#include<iostream>
#include<string.h>
using namespace std;
class employee
{
	private:
		int id;
		float salary;
		char name[20];
	public:
	    void get()
		{
			cout<<"enter employee details";
			cin>>id;
			cin>>salary;
			strcpy(name,"ammu");
		}
		 void print()
		{
			cout<<"employee details are:"<<endl;
			cout<<id<<endl<<salary<<endl<<name<<endl;
			}	
};
int main()
{
	employee e;
	e.get();
	e.print();
	return 0;
}

/*output
enter employee details 597 3200000
employee details are:
597
3.2e+006
ammu*/
