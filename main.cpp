#include <iostream>
#include <memory>
#include <cassert>
#include "aquarium.hpp"
#include "fish.hpp"

std::unique_ptr<Fish> make_fish(std::string name, Fish::Sex sex) {
  try {
    auto fish {std::make_unique<Fish>(name, sex)};
    return std::move(fish);
  } catch(Fish::UndefinedSex e) {
    std::cout << "Error while create fish" << std::endl;
    return nullptr;
  }
}

void add_fish_to_aquarium(Aquarium& aquarium, std::string name, Fish::Sex sex) {
  auto fish { make_fish(name, sex) };
  if(fish != nullptr) {
    aquarium.add_entity(std::move(fish));
  }
}

int main() {
  Aquarium aquarium;

  add_fish_to_aquarium(aquarium, "Nemo", Fish::Male);
  add_fish_to_aquarium(aquarium, "Nemette", Fish::Female);

  assert(aquarium.count_seaweed() == 0);
  for(std::size_t i {0}; i < 4; ++i) {
    aquarium.add_entity(std::make_unique<Seaweed>());
  }
  assert(aquarium.count_seaweed() == 4);

  aquarium.action();
  return 0;
}
