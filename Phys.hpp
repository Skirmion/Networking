#include <list>
#include <string>
#include "Component.hpp"
#include <SFML/Graphics.hpp>

class Physics : public Component
{
	float m = 0;
	sf::Vector2f position = sf::Vector2f(0, 0);
	sf::Vector2f velocity = { 0,0 };
	sf::Vector2f boost = {0, 0};
};

class Collider :public Component {
private:
	std::list<sf::ConvexShape> collisionModel;
public:
	bool isCollide(Collider*);
	void resolutionCollision(Collider*);
};


class PhysicsManager {
private:
	std::list<Physics*> physcomponent;
public:
	void update();
	void addPhys(GameObject*);
	void removePhys(GameObject*);
};


#endif
