// ** vector v0.10
#include <iostream>

using namespace std;

//	������ ����
int Size = 0;

//	�ִ� ����
int Capacity = 0;

//	�����̳�
int* Vector = nullptr;





// ** �����̳��� ������ ��ġ�� ���� �߰�
void push_back(const int& _Value);


//
void pop_back();

//
int front();

//
int back();


int end();

void erase(const int& _where);

void insert(const int& _where, const int& _Value);




int main(void)
{
	// ** ���� Ƚ����ŭ ��ȿ��
	for (int i = 0; i < 10; ++i)
		push_back(i * 100 + 100);

	
	
	insert(5,10);



	// ** ���
	for (int i = 0; i < Size; ++i)
		cout << "Value : " << Vector[i] << endl;

	cout << "Size : " << Size << endl;
	cout << "Capacity : " << Capacity << endl << endl;


	return 0;
}

void push_back(const int& _Value)
{
	if (Capacity <= Size)
	{
		Capacity += (Capacity <= 3) ? 1 : Capacity >> 1;

		int* Temp = new int[Capacity + 1];

		for (int i = 0; i <= Capacity; ++i)
			Temp[i] = NULL;

		for (int i = 0; i < Size; ++i)
			Temp[i] = Vector[i];

		if (Vector)
		{
			delete Vector;
			Vector = nullptr;
		}

		// �ӽ��� ��(�ش� �ּ�)�� �����ؿ�.
		Temp[Size] = _Value;

		// �ӽ��� �ּҰ��� �����ص� ����
		// �߰��� ���ο� ���� �ٽ�
		// ���������� ����Ǿ� �ִ� Vector�� ������.
		Vector = Temp;
	}
	else
		// ������ ��ġ�� �� �߰�
		Vector[Size] = _Value;
	// ���� ������ �ִ밪 ����.
	++Size;

	cout << "Value : " << _Value << endl;
	cout << "Size : " << Size << endl;
	cout << "Capacity : " << Capacity << endl << endl;
}


void pop_back()
{
	//�������ؼ� ���� �޾ƿ�������
	--Size;
}

int front()
{
	return Vector[0];
}

int back()
{
	return Vector[Size - 1];
}


int end()
{
	return Vector[Size];
}

void erase(const int& _where)
{
	// ���� ��ġ�� �ִ� ������ �����ϰ� 
	--Size;
	for (int i = _where + (-1); i < Size; ++i)
		Vector[i] = Vector[i + 1];

}

void insert(const int& _where, const int& _Value)
{

	if (Capacity <= Size)
	{
		Capacity += (Capacity <= 3) ? 1 : Capacity >> 1;

		// �ӽ� �����
		int* Temp = new int[Capacity + 1];

		// �ʱ�ȭ
		for (int i = 0; i <= Capacity; ++i)
			Temp[i] = NULL;

		for (int i = 0; i < _where; ++i)
			Temp[i] = Vector[i];

		// �ش� ��ġ�� �� ����.
		Vector[_where] = _Value;
		++Size;

		// �ش� ��ġ�� ������ ���� ����
		for (int i = _where +1; i < Size; ++i)
			Temp[i] = Vector[i - 1];

		if (Vector)
		{
			delete Vector;
			Vector = nullptr;
		}

		Temp[Size] = _Value;
		Vector = Temp;
	}
	else
	{
		Vector[Size] = _Value;

	}

}


// ���� �μ�Ʈ Ư����ġ�� ������ ������ �� �ִ� �Լ� ������


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