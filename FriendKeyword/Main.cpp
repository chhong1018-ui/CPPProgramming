#include <iostream>

class Entity
{
public:
	// 정답.
	//int GetX() const { return x; }

	friend void ShowEntity(Entity& entity)
	{
		std::cout << entity.x << ", " << entity.y << "\n";
	}

	friend void Add(Entity& entity1, Entity& entity2)
	{
		entity1.x + entity2.x;
		entity1.y + entity2.y;
	}

	// 접근 한정자/제한자 (Visibility).
private:
	int x = 0;
	int y = 0;
};

//void Add(Entity& entity1, Entity& entity2)
//{
//	entity1.x + entity2.x;
//	entity1.y + entity2.y;
//}

// Entity 정보를 출력하는 함수.
//void ShowEntity(Entity& entity)
//{
//	std::cout << entity.x << ", " << entity.y << "\n";
//}

int main()
{
	Entity entity1;
	Entity entity2;
	Add(entity1, entity2);
	//entity1.Add(entity2);
	//entity.ShowEntity(entity);
	//ShowEntity(entity1);

	std::cin.get();
}