#include <iostream>

using namespace std;

int main(void)
{
	char str[2][5] = {
	{'A','B','C','D','E' },
	{'F','G','H','I','J' },
	};

	char* str1[2] = {
	   {(char*)"ABCD"},
	   {(char*)"EFGH"}

	};

	//���O
	cout << str[1][3] << endl;
	//���X
	cout << str[6][7] << endl;


	//-----

	//���O
	cout << str1[0] << endl;
	cout << str1[1] << endl;

	//�����x
	//cout << str1[3] << endl;



	return 0;
}

//�迭
/*
����
���� ���� ����

����
���̸� �ٲ� �� ����(���� ��ȯ �Ұ�)

*/