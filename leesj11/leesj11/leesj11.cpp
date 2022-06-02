#include <iostream>

using namespace std;

int main(void)
{


	return 0;
}




//배열 (첫 시간)
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
