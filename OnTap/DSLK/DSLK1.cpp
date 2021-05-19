Node* convert(Node* head) {
    
    int count = 0;
    for (Node* p = head; p != NULL; p=p->next) { count++; }
    int b1Index = count/2;
    
    Node* b = head;
    for (int i = 0; i < b1Index; i++) b = b->next;
    Node* a = head;
    
    Node* a1 = head; Node* b1 = b;
    a = a1->next;  //a2
    b = b1->next;  //b2
    a1->next = b1;  // noi a1-b1.....
    Node* end = b1;
    
    while (b != NULL) {
        end->next = a;  //noi cap a tiep theo
        a = a->next;    //nhay a
        end->next->next = b; // noi b tiep theo
        b = b->next;
        end = end->next->next;  // chinh end ve cuoi
    }
    
    return head;
}
