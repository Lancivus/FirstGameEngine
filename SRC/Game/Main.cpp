#include <FirstGameEngine/FirstGameEngine.h>

#include <iostream>

class TestScreen : public FirstGameEngine::Component
{
public:
	void onInit(std::string color)
	{
		//std::cout << "onInit " << color << std::endl;
	}

	void onBegin()
	{
		//std::cout << "onBegin" << std::endl;
	}

	void onTick()
	{
		//std::cout << "onTick" << std::endl;
	}

	void onDisplay()
	{
		//std::cout << "onTick" << std::endl;
	}
};

int main()
{
	std::shared_ptr<FirstGameEngine::Core> c = FirstGameEngine::Core::initialize();

	std::shared_ptr<FirstGameEngine::Entity> e = c->addEntity();

	std::shared_ptr<TestScreen> ts = e->addComponent<TestScreen>("Green");
	std::shared_ptr<FirstGameEngine::MeshRenderer> mr = e->addComponent<FirstGameEngine::MeshRenderer>();
	std::shared_ptr<FirstGameEngine::MeshRenderer> mr2 = e->getComponent<FirstGameEngine::MeshRenderer>();

	c->start();

	return 0;
}
