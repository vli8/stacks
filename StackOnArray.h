//Victor Li
//Doctor Li Yanjun
//Using stack to check palindromes

#ifndef STACKONARRAY_H
#define STACKONARRAY_H

#include "itemType.h"
#include "FullStack.h"
#include "EmptyStack.h"

class StackOnArray
{
public:
  StackOnArray();
  ~StackOnArray();
  bool IsEmpty() const;
  bool IsFull() const;
  void Push(ItemType item); //throw (FullStack);
  void Pop( ); //throw (EmptyStack);
  ItemType Top(); //const throw (EmptyStack);
  void Print() const;
  int GetTop() const;
private:
  int top;
  ItemType items[MAX_ITEM];
};

#endif
