
l=[]

odds=1
evens=0

while len(l)<10:
    l.append(int(input("Enter number:")))


for i in l:
    if i%2==0:
        evens+=i
    
    else:
        odds*=i

print(l)
print("Odds:", odds,"\n", "Evens:", evens)