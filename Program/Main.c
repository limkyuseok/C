#include <stdio.h>


void main()
{
#pragma region 산술 연산자

	//1. 변수 = 변수 + 변수

	// 2. 변수 = 변수 - 리터럴 상수

	// 3. 변수 = 변수 * 심볼릭 상수

	// 4. 변수 = 리터럴 상수 / 리터럴 상수

	// 5. 변수 = 심볼릭 상수 % 리터럴 상수

	
	/*int a = 3;
	int b = 5;
	int c = a + b;

	printf("c의 값 : %d\n", c);

	int d = 10;
	int e = d - 4;

	printf("e의 값 : %d\n", e);

	int ti = 5;
	int x = 3;
	int y = ti * 3;

	printf("y의 값: %d\n", y);


	int j = 21 / 7;

	printf("j의 값 : %d\n", j);

	int pi = 3.1415;
		
	int o = pi % 2;

	printf("o의 값 :  %d\n", o);*/

	/*int storage = 0;

	int x = 10;
	int y = 5;
	int z = 1;
	int w = 10;

	const int constant = 5;

	storage = x + y;

	printf("storage : %d\n", storage);

	storage = 20 / 5;

	printf("storage : %d\n", storage);
	
	storage = w * constant;

	printf("storage : %d\n", storage);

	storage = constant % 5;

	printf("storage : %d\n", storage);*/

#pragma endregion

#pragma region 비트
	//데이터를 나타내는 최소의 단위이며, 0 또는 1의
	//조합으로 논리 계산을 수행한다.

#pragma region (10)진수를 (2)진수로 변환하는 과정
	// 10진수를 1이 될 때까지 계속 2로 나누어 준 다음
	// 나눈 위치의 나머지 값을 아래에서 위로 순서대로 정렬합니다.

	//23(10)
	//2 - 11 (-1)
	//2 - 5 (-1)
	//2 - 2 (-1)
	//2 - 1 (0)
	// 10111 (2)

#pragma endregion

#pragma region (2)진수를 (10)진수로 변환하는 과정
	// 1byte에 2진수로 저장된 값을 2의 제곱으로 나타냅니다.

	//각각의 비트에 1이 있다면 1과 2의 제곱의 위치를 계산한
	//다음 각각의 비트를 모두 더하여 10진수로 나타냅니다.


#pragma endregion


#pragma endregion

}