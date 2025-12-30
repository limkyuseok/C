#include <stdio.h>

void initialize()
{

}
void coordinate(int x, int y)
{
	printf("x = %d, y = %d\n\n", x, y);
}
void reset(char grade, int level, float experience)
{
	printf("등급 : %c\n", grade);
	printf("레벨 : %d\n", level);
	printf("경험치 : %f\n", experience);
}
void swap(int *argumentX, int *argumentY)
{
	int temporary = *argumentY;
	*argumentY = *argumentX;
	*argumentX = temporary;
}
int absolute(int x)
{
	return (x < 0) ? -x : x;
}
void function(int x)
{
	if (x <= 0)
	{
		return;
	}
	printf("%d ", x);
	function(x - 1);
}
inline int square(int x)
{
	return x * x;
}
void main()
{
#pragma region 함수
	// 하나의 특별한 목적의 작업을 수행하기 위해
	// 독립적으로 설계된 코드의 집합체입니다.
	// initalize();

#pragma endregion
#pragma region 매개 변수
	// 함수의 정의에서 전달받은 인수를 함수 내부로
	// 전달하기 위해 사용하는 변수입니다.

	//coordinate(10, 20);

	// 매개 변수는 함수 내부에서만 연산이 이루어지며,
	// 함수가 종료되면 메모리에서 해제됩니다.

	//reset('A', 10, 30.4f);

	// 하나의 함수에 서로 다른 자료형의 매개 변수를 함께
	// 정의할 수 있으며, 여러 개의 매개 변수를 생성할 수 있습니다.

#pragma endregion
#pragma region 인수
	// 함수가 호출될 때 매개 변수에 실제로 전달되는 값입니다.
	
	/*int x = 10;
	int y = 20;
	int temp;

	temp = x;
	x = y;
	y = temp;

	printf("x : %d, y : %d\n", x, y);*/

	//int x = 10;
	//int y = 20;

	//int temporary = y;

	//y = x;

	//x = temporary;
	//printf("x : %d\n", x);
	//printf("y : %d\n", y);

	/*int x = 10;
	int y = 20;

	swap(&x, &y);

	printf("x : %d\n", x);
	printf("y : %d\n", y);*/

	// 인수의 경우 함수에 있는 매개 변수에 따라 전달할 수 있는
	// 인수의 수가 결정되며, 값을 전달하는 인수와 값을 전달 받는
	// 매개 변수의 자료형이 서로 일치해야 합니다.
#pragma endregion

#pragma region 반환형
	// 함수가 실행을 마치고, 호출한 쪽으로 어던 자료형의 값을
	// 반환할 지 미리 알려주는 형식입니다.

	//printf("absolute : %d\n", absolute(7));

	// 함수의 경우 자료형과 반환하는 값의 형태가
	// 일치하지 않으면 원하는 값을 얻을 수 없습니다.
	
#pragma endregion
#pragma region 재귀 함수
	// 어떤 함수에서 자신을 다시 호출하여 작업을
	// 수행하는 함수입니다.
	
	//function(3);

	// 재귀 함수는 함수를 계속 호출하기 때문에 스택 영역에
	// 메모리가 계속 쌓이게 되므로 스택 오버플로우가 발생합니다.
#pragma endregion
#pragma region 인라인 함수
	// 함수를 호출하는 대신 하수가 호출되는 위치마다
	// 함수의 코드를 복사하여 전달하는 방식의 함수입니다.

	printf("%d\n", square(8));

	// 인라인 함수는 함수를 호출하는 과정이 없으므로 처리 속도가
	// 빠르지만, 인라인 함수를 많이 사용하게 되면 함수의 코드가
	// 복사되기 때문에 실제 파일의 크기가 커지게 됩니다.
#pragma endregion

}