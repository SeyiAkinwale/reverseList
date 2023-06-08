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

  while (curr != nullptr)
  {
    if(prev == nullptr && (back == nullptr))
    {
      prev = curr;
      curr = nullptr;
      std::cout<<std::endl<<"hi1";
    }

    if (prev == nullptr && (back != nullptr))
    {
      curr->next = nullptr;
      prev = curr;
      curr = back;
      back = back->next;
      std::cout<<std::endl<<"hi2";
    }
    
    if (prev !=nullptr && (curr != nullptr))
    {
      curr->next = prev;
      prev = curr;
      curr = back;
      back = back->next;
      std::cout<<std::endl<<"hi3";
    }
  std::cout<<std::endl<<prev->val;
  }

  return prev;
}
int main() 
{
  Node a("a");
  Node b("b");
  Node c("c");
  Node d("d");

//  a.next = &b;
//  b.next = &c;
//  c.next = &d;

//  std::cout<<"b "<<b.val<<std::endl;
  Node * end =reverseList(&a);
//  std::cout <<"end "<<end->val;
}