import Demo

print("Calc module is being imported.")

def add(a,b):
    print("a,b is ",__name__)
    return a+b

def sub(a,b):
    print(a-b)

if __name__ == "__main__":
    add(1,2)
    sub(2,3)