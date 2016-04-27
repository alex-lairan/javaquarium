#include "aquarium.hpp"

Aquarium::Aquarium() {
}

void Aquarium::add_entity(std::unique_ptr<Entity> entity) {
  m_entities.push_back(std::move(entity));
}

void Aquarium::action() {
  for(auto& entity : m_entities) {
    entity->status();
    entity->action();
  }
}

std::size_t Aquarium::count_seaweed() const {
  std::size_t i {0};
  for(auto& entity : m_entities) {
    if(entity->kind() == Entity::Seaweed) {
      ++i;
    }
  }
  return i;
}
