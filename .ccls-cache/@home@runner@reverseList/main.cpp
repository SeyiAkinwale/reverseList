#include <iostream>

class Node
{
  public:
    std::string val;
    Node * next;

  Node(std::string initialVal)
  {
    val = initialVal;
    next = nullptr;
  }
};

Node * reverseList(Node * head)
{
  Node * prev = nullptr;
  Node * curr = head;
  Node * back = head->next;
}
int main() 
{
  Node a("a");
  Node b("b");
  Node c("c");
  Node d("d");
  Node e("e");
  Node f("f");

  a.next = &b;
  b.next = &c;
  c.next = &d;

  reverseList(a);
}