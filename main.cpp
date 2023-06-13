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

void printList(Node * head)
{
  std::cout<<std::endl<<"printList ";
  if(head==nullptr) std::cout<<std::endl<<"empty list ";
  Node * curr = head;
  while (curr!=nullptr)
  {
    std::cout <<std::endl<<curr->val;
    curr=curr->next;
  }
}
Node * reverseList(Node * head)
{

  if(head == nullptr) return nullptr;
  Node * prev = nullptr;
  Node * curr = head;
  Node * back = head->next;

  while (curr != nullptr)
  { 
      std::cout<<std::endl<<"watch";
    if (prev == nullptr && (back == nullptr)) //singleton
    {
      prev = curr;
      curr = nullptr;
      std::cout<<std::endl<<"hi1";
    }

    else if (prev == nullptr && (back != nullptr)) //first of 2+ elems
    {
      curr->next = nullptr;
      prev = curr;
      curr = back;
      back = back->next;
      std::cout<<std::endl<<"hi2";
    }

    else if (prev != nullptr && (back == nullptr)) //last of 2+ elems
    {
      curr->next = prev;
      prev = curr;
      curr = back;
      back = nullptr;
      std::cout<<std::endl<<"hi3";
    }
  else if(prev !=nullptr && (back != nullptr)) //middle of 2+ elems
  {
     curr->next = prev;
      prev = curr;
      curr = back;
     back = back->next;
      std::cout<<std::endl<<"hi4";
  }
//  std::cout<<std::endl<<prev->val;

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
  Node e("e");
  Node f("f");

  a.next = &b;
  b.next = &c;
  c.next = &d;
  d.next = &e;
  e.next = &f;

//  std::cout<<"b "<<b.val<<std::endl;

  Node end("end");
  Node dummy("dummy");
  printList(&a);
  end.next=reverseList(&a);
  
  if(end.next == nullptr)std::cout<<std::endl<<"nullptr";
  else std::cout <<std::endl<<end.val;
  printList(&f);

//  std::cout<<endl<<b.val;
//  std::cout<<endl<<a.val;
 
}