#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	bool a=0;
	char b='B';
	int c=123;
	float d=456.789;
	double e=789.123456789;
	wchar_t f=2;//wchar_t 来自于 typedef short int wchar_t,储存空间和 short int 一样;
	
	cout << "bool a:" << a << endl;
	cout << "char b:" << b << endl;
	cout << "int c:" << c << endl;
	cout << "float d:" << d << endl;
	cout << "double e:" << e << endl;
	cout << "wchar_t f:" << f << endl;
	
	/*枚举类型(enumeration)
	enum 枚举名{ 
	     标识符[=整型常数], 
	     标识符[=整型常数], 
	... 
	    标识符[=整型常数]
	} 枚举变量;
	*/
	enum days{
		one=1,
		two,
		three
	}x,y,z;
	cout << "enum:" <<"\t"<<one<<"\t"<<two<<"\t"<<three<<endl;
	return 0;
}
