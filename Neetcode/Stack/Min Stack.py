"""
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

Implement the MinStack class:

MinStack() initializes the stack object.
void push(int val) pushes the element val onto the stack.
void pop() removes the element on the top of the stack.
int top() gets the top element of the stack.
int getMin() retrieves the minimum element in the stack.
You must implement a solution with O(1) time complexity for each function.

"""

class MinStack:

    def __init__(self):
        self.min = []
        self.list = []
    
    def push(self,val:int)->None:
        self.list.append(val)
        self.min.append(min(self.min[-1],val) if self.min else val)
    
    def pop(self)->None:
        self.list.pop()
        self.min.pop()
    
    def top(self)->None:
        return self.list[-1]
    
    def getMin(self)->int:
        return self.min[-1]



def test_MinStack():
    minStack = MinStack()
    minStack.push(-2)
    minStack.push(0)
    minStack.push(-3)
    assert minStack.getMin() == -3 # return -3
    minStack.pop()
    assert minStack.top()==0    # return 0
    assert minStack.getMin() == -2  # return -2

if __name__ == '__main__':
    test_MinStack()