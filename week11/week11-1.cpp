class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> a; // 罽皚璶р Linked List 柑 copy 皚
        while (head != nullptr) {
            a.push_back( head->val );
            head = head->next;
        }
        ListNode* ans = new ListNode(999);
        ListNode* now = ans;
        for (int i=a.size()-1; i>=0; i--) {
            now->next = new ListNode( a[i] );
            now = now->next;
        }
        return ans->next;
        //ListNode* now = head; // (2) 场ǐΩ
        //while (now != nullptr) { // (2) 场ǐΩ ノ while ǐ
        //    cout << now->val << " "; //  val 
        //    now = now->next; // 传
        //}
        //ListNode* ans = new ListNode(999); // (1) 或р Linked List  Node 非称
        //return ans;
    }
};
