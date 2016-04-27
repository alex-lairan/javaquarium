#ifndef __SEAWEED_HPP__
#define __SEAWEED_HPP__

#include "entity.hpp"

class Seaweed : public Entity {
public:
  Seaweed();
  void         action();
  void         status();
  Entity::Kind kind();
};

#endif /* __SEAWEED_HPP__ */
