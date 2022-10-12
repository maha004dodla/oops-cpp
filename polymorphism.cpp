#include<iostream>
using namespace std;
class class_name{
	public:
		void fun(int a,int b)
		{
			cout<<"hai";
		}
		void fun()
		{
			cout<<"hello";
		}
		void fun(double a)
		{
			cout<<"bye";
		}
};
int main()
{
	/*for double
	class_name obj;
	obj.fun(1.1);*/
	class_name obj;
	obj.fun(1,2);
}