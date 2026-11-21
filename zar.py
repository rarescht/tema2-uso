import random

x=random.randint(1,6)
y=random.randint(1,6)
if x==6 and y==5:
        print(f"Dau cu zaru {x} {y} n-am nevoie de servici")
elif x==6 and y==6:
        print(f"Dau cu zaru {x} {y} ca mine nu se mai naste")
else: print(f"Dau cu zaru {x} {y}")
