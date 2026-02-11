class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
#creating node
ele1 = Node('e')
ele2 = Node('n')
ele3 = Node('s')
ele4 = Node('y')

#before connection
print(ele1.next)

#connecting node
ele1.next = ele2
ele2.next = ele3
ele3.next = ele4

#after connection
# print(ele1.next)

# current = ele1
# while current:
#     print(current.data)
#     current = current.next
print("before insertion")
#transversal
head = ele1
current = head
while current is not None:
  print(current.data,end=" ")
  current = current.next
print("none")


head = ele1
#create new node
newNode = Node('j')
newNode.next = head
head = newNode

#transversal after insertion
print("after insertion")
current = head
while current is not None:
  print(current.data,end=" ")
  current = current.next
print("none")
