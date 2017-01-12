//
// Created by Harvey on 2017/1/11.
//

#ifndef STRADE_OBSERVER_H
#define STRADE_OBSERVER_H

#include "logic/logic_unit.h"
#include "subject.h"

namespace strade_logic {

class Observer {
 public:
  Observer();
  ~Observer();
  virtual void Init();
  virtual void Update(int opcode) = 0;
};

} /* namespace strade_logic */

#endif //STRADE_OBSERVER_H