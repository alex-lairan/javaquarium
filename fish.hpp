#ifndef __FISH_HPP__
#define __FISH_HPP__

#include <string>
#include "entity.hpp"

class Fish : public Entity {
public:
  class UndefinedSex : private std::exception{};
public:
  enum Sex {
    Male,
    Female
  };
public:
  Fish(std::string, Fish::Sex);

  void         action();
  void         status();
  Entity::Kind kind();
private:
  std::string m_name;
  Fish::Sex   m_sex;

private:
  std::string prettify(Fish::Sex) throw(UndefinedSex);
};

#endif /* __FISH_HPP__ */
