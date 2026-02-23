

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.previous = None
      
#creating node 
head = Node(5)  #head=ele1 ni jagya e direct head=Node(5)
ele2 = Node(10)
ele3 = Node(15)

#before connection
print(head.next)

#connecting node
head.next=ele2
head.prev=None
ele2.next=ele3
ele2.prev=head
ele3.next=None
ele3.prev=ele2

#after connection
# print(head.next)
current = head
while current:
    print(current.data)
    current = current.next

# traversal
current = head
while current is not None:
  print(current.data,end="-->")
  current = current.next
print("none")


# # INSERTION AT BEGINNING 
# new_node= Node(0)
# new_node.next=head
# head.prev=new_node
# head=new_node
# #traversal after insertion
# current = head
# while current is not None:
#   print(current.data,end="-->")
#   current = current.next
# print("none")



# #INSERTION AT END
# new_node2 = Node(20)
# current=head
# while current.next is not None:
#     current = current.next
# current.next = new_node2
# new_node2.prev = current
# #traversal after insertion
# current = head
# while current is not None:
#   print(current.data,end="-->")
#   current = current.next
# print("none")

# #DELETION AT BEGGINING
# head=head.next
# head.prev=None
#  #traversal after deletion
# current = head
# while current is not None:
#   print(current.data,end="-->")
#   current = current.next
# print("none")



# # DELETION AT END
# current = head
# while current.next.next is not None:
#   current = current.next
# current.next= None
# #traversal after deletion
# current = head
# while current is not None:
#   print(current.data,end="-->")
#   current = current.next
# print("none")




#INSERTION AT ANY POINT
current = head
new_node = Node(20)
new_node.next = current.next
new_node.previous = current
current.next = new_node
current.next.previous = new_node
#traversal after insertion
current = head
while current is not None:
   print(current.data,end="-->")
   current = current.next
print("None")



