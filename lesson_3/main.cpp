#include <iostream>
using namespace std;
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
extern int a=5;//������=ȫ��
int count();//�������� 

int main(int argc, char** argv) {
	cout << "ȫ��a=" << a <<endl;
	a++;
	cout << "a++���a=" << a <<endl;
	int a=10;//������=main�ڲ� 
	cout << "main�ڲ�������a=" << a <<endl;
	int res=count();//�������� 
	return 0;
}

int count(){//�������� 
	cout << "count������� a=" << a <<endl;
	return 0;
}
