#include <iostream>
using namespace std;
    //���Կ���(push) �����͸� ������ ���� ���� ��ġ�� �����ϰ� ������ �����͸� �׾Ʒ��� ��
	//��������(pop) ������ ���� ���� ��ġ�� �ִ� �����͸� �����ϰ� ������ �ִ� �����͵��� ����

int stack[10];

void function(int num) {

	 static int a = 0;

	switch (num) {

	case 1: {
		cout << "���ڸ� �Է��ϼ���" << endl;
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
	cout << "============================�Ŵ�===========================" << endl;
	cout << "push : 1 " << endl;
	cout << "pop : 2 " << endl;
	cout << "show : 3 " << endl;
	cout << "�����Ϸ��� ������ ���ڸ� �Է��ϼ��� " << endl;
	while(2) 
	{
		cout << "�޴��� �����ϼ��� : "<<endl;
		cin >> num;
		if (num == 1 || num == 2 || num == 3)
		{
			function(num);
		}
		else {
			cout << "���α׷��� �����մϴ�." << endl;
			break;
		}
	}

	





}