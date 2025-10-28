### This is a decorator which will ensure that the first argument is always greater than or equal to the second argument.
### Decorators function will change the existing behavior of the function without modifying its structure.
### This takes a function as a parameter and returns a modified function.

def div(a,b):
    return a/b

def smart_div(func):
    def inner(a,b):
        if a<b:
            a,b=b,a
        return func(a,b)
    return inner

div=smart_div(div)
print(div(2,4))