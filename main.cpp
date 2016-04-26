#include <iostream>
#include <memory>
#include <cassert>
#include "aquarium.hpp"
#include "fish.hpp"

int main() {
  auto aquarium = std::make_unique<Aquarium>();

  aquarium->add_entity(std::make_unique<Fish>("Nemo", Fish::Male));

  assert(aquarium->count_seaweed() == 0);
  for(std::size_t i {0}; i < 4; ++i)
    aquarium->add_entity(std::make_unique<Seaweed>());
  assert(aquarium->count_seaweed() == 4);

  aquarium->action();
  return 0;
}
