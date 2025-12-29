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

	int x = 10;
	int y = 20;

	swap(&x, &y);

	printf("x : %d\n", x);
	printf("y : %d\n", y);

	// 인수의 경우 함수에 있는 매개 변수에 따라 전달할 수 있는
	// 인수의 수가 결정되며, 값을 전달하는 인수와 값을 전달 받는
	// 매개 변수의 자료형이 서로 일치해야 합니다.
#pragma endregion


}