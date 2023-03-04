

    
ls=[8783, 6, 2, [6, 2, 5, [3], [57, 0], 2, [6, [9, 1, [2,6], 90, 34, [89, 1, 9,[90]], 1]]]]
ls1=list()

def check(ls, ls1):
    tem=0
    for i in str(ls):
        if  i in "1234567890":
            tem+=1
        elif i==",":
            ls1.append(int(tem))
           

check(ls, ls1)
print(ls1)