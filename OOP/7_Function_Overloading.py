


class Calculator:
    def sum(self,num1,num2,num3=None):
       if num3 is None:
           return num1+num2
       return num1+num2+num3
    
    
cal = Calculator()

# Two or more methods have the same name but different numbers of parameters or different types of parameters, or both
# python does not support method overloading by default. But there are different ways to achieve method overloading in Python. 
print(cal.sum(1,2,3))
print(cal.sum(1,2))