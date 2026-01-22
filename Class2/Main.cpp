#include <iostream>

// 클래스
class Player
{
	// 접근 한정자/접근 제한자.
	// 클래스 내부의 속성을 어디까지 노출시킬지 결정.
	// public/protected/private.
	// 공개/상속(물려줌) 계층까지/나만.
public:

	// setter(세터).
	// 공개 함수(메소드) -> 메시지.
	inline void SetX(const int inX)
	{
		x = inX;
	}

	inline void SetY(const int inY)
	{
		y = inY;
	}

	inline void SetSpeed(const int inSpeed)
	{
		speed = inSpeed;
	}

	//(Getter)게터
	inline int GetX() const
	{
		return x;
	}

	// 클래스 조작 함수.
	void Move(int x, int y)
	{
		SetX(x);
		SetY(y);
	}

private:
	int x = 0;
	int y = 0;
	int speed = 0;
};

// 클래스 조작 함수.
//void Move(Player& player, int x, int y)
//{
//	player.SetX(x);
//	player.SetY(y);
//}

int main()
{
	// 인스턴스/객체.
	Player player1;
	// player1.SetX(5);
	// player1.SetY(2);
	player1.SetSpeed(3);
	player1.Move(5, 2);

	// 힙.
	Player* player2 = new Player();
	player2->Move(3, 1);
	//(*player2).Move(3, 1);

	std::cin.get();
}