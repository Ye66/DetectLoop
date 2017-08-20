bool DetectLoop(Node *head){
  Node* fast = &head;
  Node* slow = &head;
  while(1){
    slow++;
    for(int i=0; i<2; ++i){
      fast++
      if(fast == nullptr)
        return false
      else if(fast == slow){
        return true;
      }
    }
}
