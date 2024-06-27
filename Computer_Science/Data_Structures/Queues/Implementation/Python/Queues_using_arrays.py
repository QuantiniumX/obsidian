class Queue:
    def __init__(self):
        self.list = []

    def enqueue(self, data):
        self.list.append(data)

    def dequeue(self):
        if len(self.list) == 0:
            raise IndexError("Dequeuing from an empty queue")
        return self.list.pop(0)

    def peek(self):
        if len(self.list) == 0:
            raise IndexError("Peeking into an empty queue")
        return self.list[0]

    def size(self):
        return len(self.list)

    def is_empty(self):
        return len(self.list) == 0
