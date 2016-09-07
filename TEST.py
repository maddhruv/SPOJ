L = [ ]
i = int(input("Enter the number:"))
if (i != 42):
    L.append(i)
    i = int(input("Enter the next number:"))
    while(i!=42):
        L.append(i)
        i = int(input("Enter the next number:"))
L.append(42)
for x in L:
    print(x)
