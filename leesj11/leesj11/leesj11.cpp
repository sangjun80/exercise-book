#include <iostream>

using namespace std;

int main(void)
{
	int Size = 10;
	int iter = 0;
	int* Vector = new int[Size];


	for (int i = 0; i < Size; ++i)
		Vector[i] = i;

	for (int i = 0; i < Size; ++i)
		cout << Vector[i] << endl;

	return 0;
}




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