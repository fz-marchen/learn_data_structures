/**
 * 将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 
 * 
 * 示例：
    输入：1->2->4, 1->3->4
    输出：1->1->2->3->4->4
 */

function ListNode(val, next) {
    this.val = (val===undefined ? 0 : val)
    this.next = (next===undefined ? null : next)
}
const node1 =  new ListNode(4)
const node2 =  new ListNode(2, node1)
const l1 =  new ListNode(1, node2)

const node4 =  new ListNode(4)
const node5 =  new ListNode(3, node4)
const l2 =  new ListNode(1, node5)

var mergeTwoLists = function(l1, l2) {
    
    const prehead = new ListNode(-1);

    let prev = prehead;
    while (l1 != null && l2 != null) {
        if (l1.val <= l2.val) {
            prev.next = l1;
            l1 = l1.next;
        } else {
            prev.next = l2;
            l2 = l2.next;
        }
        prev = prev.next;
    }

    // 合并后 l1 和 l2 最多只有一个还未被合并完，我们直接将链表末尾指向未合并完的链表即可
    prev.next = l1 === null ? l2 : l1;

    return prehead.next;

};

function test() {

    let result = mergeTwoLists(l1, l2)


    // console.log('result1', result)
    // console.log('result2', result.next)
    // console.log('result3', result.next.next)
    // console.log('result4', result.next.next.next)
    // console.log('result5', result.next.next.next.next)
    // console.log('result6', result.next.next.next.next.next)

    while(result) {
        console.log('result', result.val)
        result = result.next
    }
    
}

test()