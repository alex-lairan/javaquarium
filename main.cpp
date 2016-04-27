#include <iostream>
#include <memory>
#include <cassert>
#include "aquarium.hpp"
#include "fish.hpp"

int main() {
  Aquarium aquarium;

  aquarium.add_entity(std::make_unique<Fish>("Nemo", Fish::Male));
  aquarium.add_entity(std::make_unique<Fish>("Nemette", Fish::Female));

  assert(aquarium.count_seaweed() == 0);
  for(std::size_t i {0}; i < 4; ++i) {
    aquarium.add_entity(std::make_unique<Seaweed>());
  }
  assert(aquarium.count_seaweed() == 4);

  aquarium.action();
  return 0;
}
