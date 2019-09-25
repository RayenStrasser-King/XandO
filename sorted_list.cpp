#include "sorted_list.h"
#include <iostream>
using namespace std;

// Return the product of all values contained in this list.
// (The product is all of the values multiplied together).
// IMPLEMENT THIS METHOD
int SortedList::product()
{
        int product = 0;
        Node *ptr = m_head;
        while (ptr != NULL)
        {
                product = product * ptr->m_value; //product = value at node
                ptr = ptr->m_next; // moves to next node
        }
        return product;
}


// Outputs each value on the given linked list to stdout.
// DO NOT MODIFY THIS METHOD
void SortedList::print() {
  Node *node = m_head;
  while(node != NULL) {
    cout << node->m_value << " ";
    node = node->m_next;
  }
  cout << endl;
}

// Inserts a new node with the given value, in sorted order.
// DO NOT MODIFY THIS METHOD
void SortedList::insert(int value) {
  // Is list empty?
  if (m_head == NULL || m_head->m_value > value) {
    // Insert before head...
    m_head = new Node(value, m_head);
  } else {
    // Insert after existing node...
    Node *node = m_head;
    while (node->m_next != NULL && node->m_next->m_value < value) {
      node = node->m_next;
    }
    node->m_next = new Node(value, node->m_next);
  }
}

// Deletes the first node found with the given value.
// Returns true if a node was deleted, otherwise false.
// DO NOT MODIFY THIS METHOD
bool SortedList::remove(int value) {
  bool result = false;
  if (m_head != NULL) {
    if (m_head->m_value == value) {
      Node *nodeToDelete = m_head;
      m_head = m_head->m_next;
      delete nodeToDelete;
      result = true;
    } else {
      Node *node = m_head;
      while (node->m_next != NULL && node->m_next->m_value != value) {
    node = node->m_next;
      }
      if (node->m_next != NULL) {
    Node *nodeToDelete = node->m_next;
    node->m_next = nodeToDelete->m_next;
    delete nodeToDelete;
    result = true;
      }
    }
  }
  return result;
}
