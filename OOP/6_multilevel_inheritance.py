# Base class (grandparent class)
class Grandparent:
    def __init__(self, grandparent_name):
        self.grandparent_name = grandparent_name

    def display_grandparent(self):
        print(f"Grandparent Name: {self.grandparent_name}")


# Intermediate class (parent class), inherits from Grandparent
class Parent(Grandparent):
    def __init__(self, grandparent_name, parent_name):
        # Call the constructor of Grandparent
        super().__init__(grandparent_name)
        self.parent_name = parent_name

    def display_parent(self):
        print(f"Parent Name: {self.parent_name}")


# Derived class (child class), inherits from Parent
class Child(Parent):
    def __init__(self, grandparent_name, parent_name, child_name):
        # Call the constructor of Parent (which also calls Grandparent)
        super().__init__(grandparent_name, parent_name)
        self.child_name = child_name

    def display_child(self):
        print(f"Child Name: {self.child_name}")


child = Child("John Sr.", "John Jr.", "Johnny")

# Accessing methods from all levels of inheritance
child.display_grandparent()  
child.display_parent()       
child.display_child()        
