#ifndef __AQUARIUM_HPP__
#define __AQUARIUM_HPP__

#include <iostream>
#include <vector>
#include <memory>
#include <boost/noncopyable.hpp>

#include "entity/entity.hpp"

class Aquarium : public boost::noncopyable {
public:
  Aquarium();

  void add_entity(std::unique_ptr<Entity> entity);

  std::size_t count_seaweed() const;

  void action();

private:
  std::vector<std::unique_ptr<Entity>> m_entities;
};

#endif /* __AQUARIUM_HPP__ */
