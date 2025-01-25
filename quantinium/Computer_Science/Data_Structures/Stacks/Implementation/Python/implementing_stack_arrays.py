class Stack():
    """
    Stack is a linear data structure that follows LIFO
    """

    def __init__(self):
        """
        Initializing a list to store data when the Stack is used in main
        """
        self.list = []

    def push(self, data):
        """
        Appending the list with the data that the user wants to push in the
        stack
        """
        self.list.append(data)

    def pop(self):
        """
        Popping the last element in the list and returning the data that is
        popped and returns None if the list is empty.
        """
        if len(self.list) == 0:
            return None
        return self.list.pop()

    def size(self):
        """
        Return the size of the list that is the size of the stack
        """
        return len(self.list)

    def is_empty(self):
        """
        Returning if the stack is empty or not
        """
        if len(self.list) == 0:
            return True
        return False

    def peek(self):
        """
        Return the value of the top of the stack that is the end of the list.
        """
        if len(self.list) == 0:
            return None
        return self.list[-1]
