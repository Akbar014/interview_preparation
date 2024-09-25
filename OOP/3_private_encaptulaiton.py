
class MyClass:
    def __init__(self, value):
        self.__private_value = value
        print("The value is set successfully" , self.__private_value)

    def __private_display(self):
        print ("This is private method can not access directly")
        print(f"The private value is : {self.__private_value }"  )

    def show_private_method(self):
        self.__private_display()

     
obj = MyClass(5)
# obj.__private_display()
obj.show_private_method()
print(obj._MyClass__private_value)  # not recommended to access by this way 