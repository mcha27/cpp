#ifndef SLL
#define SLL

class SLinkedListNode{
    public:
        int data;
        SLinkedListNode *next;

        SLinkedListNode(int node_data);
};

class SLinkedList{
    public:
        SLinkedListNode *head;
        SLinkedListNode *tail;

        SLinkedList();

        void print_ll(SLinkedListNode* head);
        void insert_node(int node_data);
        SLinkedListNode* insert_tail(SLinkedListNode* head, int data);
        SLinkedListNode* insert_head(SLinkedListNode* head, int data);
        SLinkedListNode* insert_position(SLinkedListNode* head, int data, int position);
        SLinkedListNode* delete_head(SLinkedListNode* head);
        SLinkedListNode* delete_tail(SLinkedListNode* head);
        SLinkedListNode* delete_node(SLinkedListNode* head, int position);
        void reverse_ll();
        int get_size(SLinkedListNode* head);
        SLinkedListNode* make_unique(SLinkedListNode* head);
};

#endif

