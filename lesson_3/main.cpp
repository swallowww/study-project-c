#include <iostream>
using namespace std;
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
extern int a=5;//������=ȫ��
int count();//�������� 
//������� 
class Car
{
	public:
		int carNumber;
		string carColor;
		void setCar(int num,string color);
		void getCar(void);
};
//��Ա��������
void Car::setCar(int num,string color){//��Ա���� 
	carNumber=num;
	carColor=color;
	
} 

void Car::getCar(){//��Ա���� 
	cout << "���ƺţ�" << carNumber << endl;
	cout << "��ɫ��" << carColor << endl;
}

int main(int argc, char** argv) {
	/*************extern��������***********/
	cout << "ȫ��a=" << a <<endl;
	a++;
	cout << "a++���a=" << a <<endl;
	int a=10;//������=main�ڲ� 
	cout << "main�ڲ�������a=" << a <<endl;
	/*************������ʹ��***************/
	int res=count();//�������� 
	/*************forѭ����ʹ��************/
	for(int i=0;i<5;i++){
		cout << "forѭ��" << i << endl;
	}
	/****************���ʹ��**************/
	Car dz;
	dz.setCar(123456789,"black");
	dz.getCar();
	return 0;
}
//�������� 
int count(){
	cout << "count������� a=" << a <<endl;
	return 0;
}
