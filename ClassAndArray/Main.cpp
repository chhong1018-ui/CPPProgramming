#include <iostream>

// 게임 물체(객체).
// Game-Object / Actor / Entity(개체).

// 클래스.
class Entity
{
public:
	Entity()
	{
		std::cout << "Constructor called\n";
	}

	~Entity() = default;

	// 함수 끝에 const를 지정하면,
	// 함수 본문에서 객체 내부의 값을 변경할 수 없음.
	void ShowName() const
	{
		std::cout << "Entity.\n";
	}

	Entity* GetSelf()
	{
		//this는 자기 자신을 가리키는 '포인터'.
		return this;
	}
};
int main()
{
	// C++.
	//Entity* entity = nullptr;
	//entity->ShowName();
	//Showname(entity);

	//const int count = 5;
	//Entity entities[count];

	////range-based loop (foreach)
	//for (const Entity& entity : entities)
	//{
	//	entity.ShowName();
	//}

	//const int count = 5;
	//Entity* entities[count] = { };
	////memset(entities, 0, sizeof(Entity*) * count);

	//for (int ix = 0; ix < count; ++ix)
	//{
	//	entities[ix] = new Entity();
	//}

	//for (Entity*& entity : entities)
	//{
	//	delete entity;
	//	entity = nullptr;
	//}

	Entity* entity = new Entity();
	std::cout << entity << "\n";
	std::cout << entity->GetSelf() << "\n";

	delete entity;

	std::cin.get();
}