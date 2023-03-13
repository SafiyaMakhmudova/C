N=int(input("N="))

dict1={}

for i in range(1,N+1):
    print(i,":")
    dict1[i]=input()

dict1_sorted=dict(sorted(dict1.items(), key=lambda x: x[1].lower()))

for key, value in dict1_sorted.items():
    if value not in '123456789':
        print("{}:{}".format(key,value))