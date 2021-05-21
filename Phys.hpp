#ifndef Physics_HPP
#define Physics_HPP

#include <list>
#include <string>
#include "Component.hpp"
#include <SFML/Graphics.hpp>

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
