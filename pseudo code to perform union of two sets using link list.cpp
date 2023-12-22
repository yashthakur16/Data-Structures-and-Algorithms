Node {
    data
    next
}

Function unionSets(list1, list2):
    result = NULL
    temp1 = list1.head
    temp2 = list2.head

    while temp1 is not NULL:
        result = addToResult(result, temp1.data)
        temp1 = temp1.next

    while temp2 is not NULL:
        result = addToResult(result, temp2.data)
        temp2 = temp2.next

    return result

Function addToResult(result, data):
    node = createNode(data)
    if result is NULL:
        result = node
    else:
        lastNode = result
        while lastNode.next is not NULL:
            lastNode = lastNode.next
        lastNode.next = node
    return result

Function createNode(data):
    node = new Node
    node.data = data
    node.next = NULL
    return node

list1 = createLinkedList(1, 2, 3, 4, 5)
list2 = createLinkedList(2, 4, 6, 7, 8, 9, 10)
resultList = unionSets(list1, list2)
