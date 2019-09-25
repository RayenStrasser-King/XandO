#ifndef SORTED_LIST_H
#define SORTED_LIST_H
#include <cstddef>

class SortedList
{
public:
  SortedList() {m_head = NULL;}
  ~SortedList() {};
  void insert(int value);
  bool remove(int value);
  int product();
  void print();
private:
  class Node
  {
  public:
    Node(int value, Node *next) {m_value = value; m_next = next;}
    int m_value;
    Node *m_next;
  };
  Node *m_head;
};
#endif
