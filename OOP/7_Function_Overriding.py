



# Runtime Polymorphism -> Dynamic Binding | Overriding | Late Binding

# CompileTime Polymorphism-> Static Binding | Overloading | Early Binding  



class Animal:
    def sound(self):
        return "Animal Sound "

class Dog(Animal):
    def sound(self):  #overriding parent class method
        return "Bark"

class Cat(Animal):
    def sound(self):  #overriding parent class method
        return "Meow"


# Polymorphism: Different behaviors depending on the actual object type
def make_sound(animal):
    print (animal.sound())


# print(Dog().sound())
dog = Dog()
cat = Cat()

make_sound(Dog())
make_sound(dog)



