
a=int(input("How may numbers you want to enter?"))

l=[]

while len(l)<a:
    l.append(int(input()))


sum_indx=sum([i for i in range(0,len(l))])
sum_val=sum(l)

if sum_indx>sum_val:
    print("INDEX")

elif sum_val>sum_indx:
    print("VALUES")

else:
    print("WOW")
