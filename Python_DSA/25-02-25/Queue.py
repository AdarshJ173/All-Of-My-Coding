class queue :
    def __init__(self):
        self.value = []
    def enqueue(self,x):
        self.value.append(x)
    def dequeue(self):
        if not self.value:
            return "Queue is empty"
        front = self.value[0]
        self.value = self.value[1:]
        return front
q1 = queue()
q1.enqueue(10)
q1.enqueue(20)
q1.enqueue(30)

print(q1.value)
q1.enqueue(40)
print(q1.value)

print(q1.dequeue())

print(q1.value)
