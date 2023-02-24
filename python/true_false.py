
l=[]

t=0
f=0

while len(l)<10:
    l.append(int(input("Enter numbers: ")))


for i in range(0,len(l)):
    if l[i]==i:
        print("TRUE")
        t+=1

    else:
        print("FALSE")
        f+=1

print("\n")
print("TRUE:", t)
print("FALSE:", f)