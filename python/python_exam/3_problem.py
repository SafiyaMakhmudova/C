
Text=input("Text=")
A=input("A=")
B=input("B=")

for item in range(0,len(Text)):
    if Text[item]==A:
        lensA=item
    if Text[item]==B:
        lensB=item



print(Text[lensA+1:lensB])
