#include <memory>
#include "aquarium.hpp"
#include "fish.hpp"

int main() {
  auto aquarium = std::make_unique<Aquarium>();
  auto fish     = std::make_unique<Fish>("Nemo");

  aquarium.add_entity(std::move(fish));

  return 0;
}
