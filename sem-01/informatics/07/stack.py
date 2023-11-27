class Stack:
    def __init__(self):
        self.items = []

    def push(self, item):
        self.items.append(item)
        print(f"Added element: {item}")
        self.display()

    def pop(self):
        if not self.is_empty():
            popped_item = self.items.pop()
            print(f"Removed element: {popped_item}")
            self.display()
            return popped_item
        else:
            print("Stack is empty. Cannot pop.")
    
    def is_empty(self):
        return len(self.items) == 0

    def display(self):
        print("Stack content:", self.items)


stack = Stack()

stack.push(1)
stack.push(2)
stack.push(3)

print(stack.pop())
print(stack.pop())
print(stack.pop())
print(stack.pop())
