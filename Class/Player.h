#pragma once  // -> 중복 include 방지 구문 (컴파일러 구문).

// 클래스.
class Player
{
	// 접근 한정자/접근 제한자.
	// 클래스 내부의 속성을 어디까지 노출시킬지 결정.
	// public/protected/private.
	// 공개/상속(물려줌) 계층까지/나만.
public:

	// 생성자.
	// 파라미터를 받지 않는 생성자 = 기본 생성자.
	//Player() = default;
	//~Player() = default;
	Player();
	~Player();

	// 클래스 조작 함수.
	void Move(int x, int y);
	//{
	//	x = inX;
	//	y = inY;
	//}

private:
	int x = 0;
	int y = 0;
	int speed = 0;
};
