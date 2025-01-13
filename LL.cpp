
#include <bits/stdc++.h>
using namespace std;

class SinglyLinkedListNode { 
    public: int data;
    SinglyLinkedListNode *next;
    SinglyLinkedListNode(int node_data) { 
    this->data = node_data; 
    this->next = nullptr; 
    } 
    };
    
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

bool has_cycle(SinglyLinkedListNode *head) {
    if (head == nullptr) return false;

    SinglyLinkedListNode *slow = head;
    SinglyLinkedListNode *fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return true;
        }
    }

    return false;
}
