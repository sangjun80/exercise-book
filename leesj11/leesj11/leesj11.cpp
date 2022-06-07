// ** vector v0.7
#include <iostream>

using namespace std;

//	원소의 개수
int Size = 0;

//	최대 개수
int Capacity = 0;

//	컨테이너
int* Vector = nullptr;





// ** 컨테이너의 마지막 위치에 값을 추가
void push_back(const int& _Value);



void pop_back();

int front();

int back();

int begin();

int end();

void Delete(const int& _where);




int main(void)
{
	for (int i = 0; i < 10; ++i)
		push_back(i * 100 + 100);
	
	pop_back();
	push_back(10000);
	
	for (int i = begin() ; i != end(); ++i)
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

		int* Temp = new int[Capacity];

		for (int i = 0; i < Capacity; ++i)
			Vector[i] = NULL;
		
		for (int i = 0; i < Size; ++i)
			Temp[i] = Vector[i];

		if (Vector)
		{
			delete Vector;
			Vector = nullptr;
		}

		Temp[Size] = _Value;
		Vector = Temp;
	}
	else
		Vector[Size] = _Value;
	
	++Size;
	Vector[Capacity] = NULL;

	cout << "Value : " << _Value << endl;
	cout << "Size : " << Size << endl;
	cout << "Capacity : " << Capacity << endl << endl;

}


void pop_back()
{
	//삭제만해서 값을 받아오지않음
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

int begin()
{
	return front();
}

int end()
{
	return Vector[Size];
}

void Delete(const int& _where)
{
	// 즉정 위치에 있는 원서를 삭제하고 
	--Size;
	for (int i = _where + (-1); i < Size; ++i)
		Vector[i] = Vector[i + 1];

}

// 숙제 인설트 특정위치에 데이터 삽입할 수 있는 함수 만들어라


//배열
/*
장점
직접 접근 가능

단점
길이를 바꿀 수 없음(동적 변환 불가)

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

	//출력O
	cout << str1[1][3] << endl;
	//출력X
	cout << str2[6][7] << endl;


	//-----

	//출력O
	cout << str1[0] << endl;
	cout << str1[1] << endl;

	//디버깅x
	//cout << str1[3] << endl;



	return 0;
}
*/
/*
배열은 0이 아닌 값으로만 초기화가 가능하다.
배열은 상수값으로만 초기화가 가능하다.
아래와 같이 사용한다면 위 조건은 무시할 수 있다.

int Size = 0;
int iter = 0;
int* Vector = new int[Size];

Vector[iter]

/*
//배열을 만들 때 컴퓨터가 인지하는건 2진수라서 2진수로 표기하는게 좋음(ex/ 50을 쓰려면 64로)

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