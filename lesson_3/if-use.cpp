#include <iostream>
using namespace std;

int main(){
	cout << "���������ķ������س���" << endl;
	int score;
	cin >> score;
	if(score>=0 && score <=150){
		//����������� 
		cout << "��������Ϊ��";
		if(score >= 120){
			cout << "A" << endl;
		}else if(score >=90){
			cout << "B" << endl;
		}else{
			cout << "C" << endl;
		}
	}else{
		//�������������
		cout << "��������ȷ�ķ���" << endl; 
	}
	return 0;
}
