// ** vector v0.7
#include <iostream>

using namespace std;

//	������ ����
int Size = 0;

//	�����̳�
int* Vector = nullptr;

void push_back(const int& _Value);


int main(void)
{
	push_back(100);
	push_back(200);

	for (int i = 0; i < Size; ++i)
		cout << Vector[i] << endl;

	
	return 0;
}

void push_back(const int& _Value)
{
	
	if (Size <= 0)
	{
		++Size;
		Vector = new int[Size];
		Vector[Size - 1] = _Value;
	}
	else
	{
		++Size;
		int* Temp = new int[Size];

		for (int i = 0; i < Size; ++i)
		Temp[i] = Vector[i];

		delete Vector;
		Vector = nullptr;

		Temp[Size - 1] = _Value;
		Vector = Temp;

	}
	
	
}


//�迭
/*
����
���� ���� ����

����
���̸� �ٲ� �� ����(���� ��ȯ �Ұ�)

*/
/*
int main(void)
{
	char str1[2][5] = {
	{'A','B','C','D','E' },
	{'F','G','H','I','J' },
	};

	char* str2[2] = {
	   {(char*)"ABCD"},
	   {(char*)"EFGH"}

	};

	//���O
	cout << str1[1][3] << endl;
	//���X
	cout << str2[6][7] << endl;


	//-----

	//���O
	cout << str1[0] << endl;
	cout << str1[1] << endl;

	//�����x
	//cout << str1[3] << endl;



	return 0;
}
*/
/*
�迭�� 0�� �ƴ� �����θ� �ʱ�ȭ�� �����ϴ�.
�迭�� ��������θ� �ʱ�ȭ�� �����ϴ�.
�Ʒ��� ���� ����Ѵٸ� �� ������ ������ �� �ִ�.

int Size = 0;
int iter = 0;
int* Vector = new int[Size];

Vector[iter]

/*
//�迭�� ���� �� ��ǻ�Ͱ� �����ϴ°� 2������ 2������ ǥ���ϴ°� ����(ex/ 50�� ������ 64��)

	char n = 16;

	printf_s("%d", n >> 1);

	int Vector[64];


*/
//	0 0000000 0
//	0 0000001 1
//	0 0000010 2
//  0 0000011 3
//	0 0000100 4
//	0 0000101 5
//	0 0000110 6
//	0 0001000 
//	0 0001001 
//	.
//	.
//	.
//	0 1111111 127 
//	1 0000000 -1