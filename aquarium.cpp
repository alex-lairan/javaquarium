#include "aquarium.hpp"

Aquarium::Aquarium() {
}

Aquarium::~Aquarium() {
}

void Aquarium::add_entity(Entity &entity) {
  _entities.push_back(std::move(entity));
}

void Aquarium::action() {
  for(auto& entity : _entities)
  {
    entity->action();
  }
}
