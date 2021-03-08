#include <iostream>
using namespace std;
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
extern int a=5;//作用域=全局
int count();//函数声明 

int main(int argc, char** argv) {
	cout << "全局a=" << a <<endl;
	a++;
	cout << "a++后的a=" << a <<endl;
	int a=10;//作用域=main内部 
	cout << "main内部声明的a=" << a <<endl;
	int res=count();//函数调用 
	return 0;
}

int count(){//函数定义 
	cout << "count函数输出 a=" << a <<endl;
	return 0;
}
