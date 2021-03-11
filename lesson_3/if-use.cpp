#include <iostream>
using namespace std;

int main(){
	cout << "请输入您的分数并回车：" << endl;
	int score;
	cin >> score;
	if(score>=0 && score <=150){
		//输入分数正常 
		cout << "您的评分为：";
		if(score >= 120){
			cout << "A" << endl;
		}else if(score >=90){
			cout << "B" << endl;
		}else{
			cout << "C" << endl;
		}
	}else{
		//输入分数不正常
		cout << "请输入正确的分数" << endl; 
	}
	return 0;
}
