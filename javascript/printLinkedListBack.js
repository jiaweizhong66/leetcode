var printLinkedListInReverse = function(head) {
    if (head.getNext()) {
        printLinkedListInReverse(head.getNext());
    }
    head.printValue();
    return;
};