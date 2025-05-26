/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var swapPairs = function(head) {
    let dummy = new ListNode(0, head)
    let before = dummy

    while (before.next && before.next.next){
        let first = before.next
        let second = first.next

        before.next = second
        first.next = second.next
        second.next = first

        before = first
    }

    return dummy.next
};