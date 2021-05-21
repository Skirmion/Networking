#ifndef Physics_HPP
#define Physics_HPP

#include <list>
#include <string>
#include "Component.hpp"
#include <SFML/Graphics.hpp>

class Physics : public Component
{
	float m = 0;
	sf::Vector2f position = {0, 0};
	sf::Vector2f velocity = {0, 0};
	sf::Vector2f boost = {0, 0};
};

class Collider :public Component {
private:
	std::list<sf::ConvexShape> collisionModel;
public:
	void isCollide(Collider* one);
	void resolutionCollision(Collider* one);
};


class PhysicsManager {
private:
	std::list<Physics*> physcomponent;
public:
	void update();
	void addPhys(Component* col);
	void removePhys(Component* col);
};


#endif
