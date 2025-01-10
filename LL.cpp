
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    if (!llist) return nullptr; // Handle empty list

    SinglyLinkedListNode* curr = llist;

    while (curr != nullptr && curr->next != nullptr) {
        if (curr->data == curr->next->data) {
            SinglyLinkedListNode* temp = curr->next; // Store the duplicate node
            curr->next = curr->next->next; // Bypass the duplicate
            delete temp; // Free the memory of the duplicate node
        } else {
            curr = curr->next; // Move to the next node only if no duplicate
        }
    }

    return llist;
}
