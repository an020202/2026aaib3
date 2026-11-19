class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(999);
        ListNode* now = ans;
        // 如果 左邊有值、不是空空的 右邊有值、不是空空的
        while ( list1 != nullptr && list2 != nullptr) {
            if ( list1->val < list2->val ) { // 左邊小，用左邊
                now->next = new ListNode( list1->val );
                now = now->next;
                list1 = list1->next;
            } else { // 右邊小，用右邊
                now->next = new ListNode( list2->val );
                now = now->next;
                list2 = list2->next;
            }
        }
        //ans->next = list2; // 亂寫的
        return ans;
    }
};
