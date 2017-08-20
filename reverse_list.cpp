Node* Reverse(Node* head) {
  if(head == nullptr){
    return head
  }

  Node* pre = nullptr
  Node* now = &head
  Node* next = head->next
  now->next = pre

  while(next != nullptr){
    nex->next = now
    pre = now
    now = nex
    next = next->next
  }
  return now;
}
