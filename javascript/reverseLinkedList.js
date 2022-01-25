var reverseList = function(head) {
    let prev = null;
    let cur = head;
    let succ = null;

    while (cur) {
        succ = cur.next;
        cur.next = prev;
        prev = cur;
        cur = succ;
    }

    head = prev;
    return head;
};