#include <iostream>
#include <memory>

class Player {
public:
	Player()
	{
		std::cout << "생성자 호출\n";
	}

	Player(const Player& other) = delete;
	Player& operator=(const Player& other) = delete;
//private:
//	Player(const Player& other)
//	{
//	}
//	Player& operator=(const Player& other)
//	{
//		return *this;
//	}

public:
	~Player()
	{
		std::cout << "소멸자 호출\n";
	}
};

//void Function(std::unique_ptr<Player>& player)
void Function(Player& player)
{
	// 위험한 코드.
	//Player* rawPointer = player.get();
	//delete rawPointer;
	//player->
	//delete player;
	std::cout << "Player 받음\n";
}

int main()
{
	//Player player;
	//Player player2 = player;
	//player = player2;

	// unique_ptr 객체 선언.
	std::unique_ptr<Player> player 
		= std::make_unique<Player>();

	//Function(player);
	Function(*player);
	//Function(std::make_unique<player>());

	//std::unique_ptr<Player> player2;
	//player2 = std::move(player);

	//std::cin.get();
}