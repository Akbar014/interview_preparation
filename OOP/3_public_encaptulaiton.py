

class MyClass:
    def __init__(self, value):
        self.public_value = value

    def display(self):
        print ("This is display method for public encpsulation")


obj = MyClass(10)
obj.display()
print(obj.public_value)

    