#include "aquarium.hpp"

template <class DstType, class SrcType>
bool isInstanceOf(const SrcType* src) {
  return (dynamic_cast<const DstType*>(src)) != nullptr;
}

/******************************************************************************/

Aquarium::Aquarium() {
}

Aquarium::~Aquarium() {
}

void Aquarium::add_entity(std::unique_ptr<Entity> entity) {
  _entities.push_back(std::move(entity));
}

void Aquarium::action() {
  for(auto& entity : _entities)
  {
    entity->status();
    entity->action();
  }
}

std::size_t Aquarium::count_seaweed() {
  std::size_t i = 0;
  for(auto& entity : _entities) {
    if(isInstanceOf<Seaweed>(entity.get())) {
      ++i;
    }
  }
  return i;
}
