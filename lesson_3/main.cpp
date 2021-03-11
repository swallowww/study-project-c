#include <iostream>
using namespace std;
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
extern int a=5;//作用域=全局
int count();//函数声明 
//类的声明 
class Car
{
	public:
		int carNumber;
		string carColor;
		void setCar(int num,string color);
		void getCar(void);
};
//成员函数定义
void Car::setCar(int num,string color){//成员函数 
	carNumber=num;
	carColor=color;
	
} 

void Car::getCar(){//成员函数 
	cout << "车牌号：" << carNumber << endl;
	cout << "颜色：" << carColor << endl;
}

int main(int argc, char** argv) {
	/*************extern及作用域***********/
	cout << "全局a=" << a <<endl;
	a++;
	cout << "a++后的a=" << a <<endl;
	int a=10;//作用域=main内部 
	cout << "main内部声明的a=" << a <<endl;
	/*************函数的使用***************/
	int res=count();//函数调用 
	/*************for循环的使用************/
	for(int i=0;i<5;i++){
		cout << "for循环" << i << endl;
	}
	/****************类的使用**************/
	Car dz;
	dz.setCar(123456789,"black");
	dz.getCar();
	return 0;
}
//函数定义 
int count(){
	cout << "count函数输出 a=" << a <<endl;
	return 0;
}
