#include <string>
#include <list>
#include "Component.hpp"
#include <SFML/Graphics.hpp>
#include "GameObj.hpp"
#include "Phys.hpp"

void isCollide(Collider* one)
{

}

void resolutionCollision(Collider* one)
{

}



void PhysicsManager::update()
{
    for (std::list<GameObject*>::iterator it = physicsStorage.begin(); it != physicsStorage.end(); ++it)
    {
        ((*it)->getComponent<Physics>())->update();
    }
}

void PhysicsManager::addPhisics(GameObject* physicsParent)
{
    physicsStorage.push_front(physicsParent);
}

void PhysicsManager::removePhysics(GameObject* physicsParent)
{
    physicsStorage.remove(physicsParent);
}
