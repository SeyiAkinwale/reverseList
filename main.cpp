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
  if(head = nullptr) return nullptr;
  Node * prev = nullptr;
  Node * curr = head;
  Node * back = head->next;

  while (curr != nullptr)
  {   
    if (prev !=nullptr && (curr != nullptr))
    {
      curr->next = prev;
      prev = curr;
      curr = back;
 //     back = back->next;
      std::cout<<std::endl<<"hi3";
    }
  std::cout<<std::endl<<prev->val;
  }

  return prev;
}
int main() 
{
  Node * cute = nullptr;
  Node a("a");
  Node b("b");
  Node c("c");
  Node d("d");

  a.next = &b;
//  b.next = &c;
//  c.next = &d;

//  std::cout<<"b "<<b.val<<std::endl;
  Node * end =reverseList(cute);
  if(end == nullptr) cout<<"nullptr";
//  std::cout <<std::endl<<"end "<<end->val;
}