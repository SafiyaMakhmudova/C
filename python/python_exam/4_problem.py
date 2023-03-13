
with open("1.txt", "r") as f1:
    text=f1.readlines()

with open("2.txt", "w") as f2:
    
    for item in text:
        item=item.split()
        long_word=(max(item,key=len))
    
        f2.write(long_word)
        f2.write("\n")