#ifndef __ENTITY_HPP__
#define __ENTITY_HPP__

#include <boost/noncopyable.hpp>

class Entity : public boost::noncopyable {
public:
  enum Kind {
    Fish,
    Seaweed,
    MAX_KIND
  };
public:
  virtual void action() = 0;
  virtual void status() = 0;
  virtual Kind kind()   = 0;
};


#endif /* __ENTITY_HPP__ */
