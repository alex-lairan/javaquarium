#include <iostream>
#include <memory>
#include <cassert>

#include "entity/herbivorous_fish.hpp"
#include "entity/seaweed.hpp"
#include "aquarium.hpp"

std::unique_ptr<HerbivorousFish> make_fish(std::string name, Fish::Sex sex,
                                           Fish::Species species) {
  try {
    auto fish {std::make_unique<HerbivorousFish>(name, sex, species)};
    return std::move(fish);
  } catch(Fish::UndefinedSex e) {
    std::cout << "Error while create fish" << std::endl;
    return nullptr;
  }
}

void add_fish_to_aquarium(Aquarium& aquarium, std::string name, Fish::Sex sex,
                          Fish::Species species) {
  auto fish { make_fish(name, sex, species) };
  if(fish != nullptr) {
    aquarium.add_entity(std::move(fish));
  }
}

int main() {
  Aquarium aquarium;

  add_fish_to_aquarium(aquarium, "Nemo", Fish::Male, Fish::Clownfish);
  add_fish_to_aquarium(aquarium, "Nemette", Fish::Female, Fish::Clownfish);

  assert(aquarium.count_seaweed() == 0);
  for(std::size_t i {0}; i < 4; ++i) {
    aquarium.add_entity(std::make_unique<Seaweed>());
  }
  assert(aquarium.count_seaweed() == 4);

  aquarium.action();
  return 0;
}
