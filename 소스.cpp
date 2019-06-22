#include <iostream>
using namespace std;
    //삽입연산(push) 데이터를 스택의 제일 높은 위치에 저장하고 기존의 데이터를 그아래에 둠
	//삭제연산(pop) 스택의 제일 높은 위치에 있는 데이터를 제거하고 기존에 있는 데이터들은 남김

int stack[10];

void function(int num) {

	 static int a = 0;

	switch (num) {

	case 1: {
		cout << "숫자를 입력하세요" << endl;
		cin >> stack[a];
		++a;
	}
		break;
	case 2: {
		stack[--a] = 0;
		
	}
		break;
	case 3:{
		for (int i = 1; i <= a; i++)
		{
			cout << stack[i - 1] << " " ;

		}cout << endl;
		
	}
		   break;
}	
}
int main()
{
	int num;
	cout << "============================매뉴===========================" << endl;
	cout << "push : 1 " << endl;
	cout << "pop : 2 " << endl;
	cout << "show : 3 " << endl;
	cout << "종료하려면 나머지 숫자를 입력하세요 " << endl;
	while(2) 
	{
		cout << "메뉴를 선택하세요 : "<<endl;
		cin >> num;
		if (num == 1 || num == 2 || num == 3)
		{
			function(num);
		}
		else {
			cout << "프로그램을 종료합니다." << endl;
			break;
		}
	}

	





}