class Linked_list:
    def __init__(self):
        self.head = None

    def append(self, val):
        new_node = Node(val)
        if self.head is None:
            self.head = new_node
            return
        current = self.head
        while current.next is not None:
            current = current.next
        current.next = new_node

    def prepend(self, val):
        new_node = Node(val)
        new_node.next = self.head
        self.head = new_node

    def insert(self, val, index):
        if index < 0 or index > self.size():
            raise IndexError(
                f"Counldn't insert node at index {index}.Valid range is 0 to\
                 {self.size()}")

        new_node = Node(val)

        if index == 0:
            new_node.next = self.head
            self.head = new_node

        current = self.head
        current_idx = 0

        while current_idx < index - 1:
            if current.next is None:
                raise IndexError("Index is out of range")
            current = current.next
            current_idx += 1
        new_node.next = current.next
        current.next = new_node

    def delete_at(self, index):
        if index < 0 or index >= self.size():
            raise IndexError(f"Counldn't delete node at index {index}. Range\
             is from 0 to {self.size()}")

        if index == 0:
            self.head = self.head.next

        current = self.head
        current_idx = 0

        while current_idx < index - 1:
            if current.next is None:
                raise IndexError("Index is out of range")
            current = current.next
            current_idx += 1

        current.next = current.next.next

    def size(self):
        count = 0
        current = self.head
        while current is not None:
            count += 1
            current = current.next
        return count

    def delete(self, val):
        if not self.head:
            return

        if self.head.val == val:
            self.head = self.head.next
            return

        current = self.head
        while current.next:
            if current.next.val == val:
                current.next = current.next.next
                return
            current = current.next

    def get(self, index):
        if index < 0 or index >= self.size():
            raise IndexError(
                "Counldn't get the position at index {index}. Valid range is\
                 0 to {self.size()}")

        current = self.head
        current_idx = 0
        while current_idx < index:
            if current.next is None:
                raise IndexError("Index is out of range")
            current = current.next
            current_idx += 1

        return current.val

    def is_empty(self):
        return self.size() == 0

    def print_list(self):
        if self.head is None:
            print("Linked list is empty")
        current = self.head
        while current is not None:
            print(f"{current.val} ", end="")
            current = current.next

    def get_head(self):
        if self.head is None:
            raise IndexError("Linked_list has no nodes")
        return self.head.val

    def get_tail(self):
        if self.head is None:
            raise IndexError("linked list had no nodes")
        current = self.head
        while current.next is not None:
            current = current.next

        return current.val


class Node:
    def __init__(self, val):
        self.val = val
        self.next = None

    def __repr__(self):
        return str(self.val)
