class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        ListNode currentNode =head;
        
        while(currentNode != null && currentNode.next !=null){
            if (currentNode.next.val == currentNode.val){
                ListNode j =currentNode.next;
                currentNode.next = j.next;
            }
            else currentNode=currentNode.next;
        }
        
        return head;
    }
}