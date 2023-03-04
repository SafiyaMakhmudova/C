

a=int(input())

dic1={
    1:"one",
    2:"two",
    3:"three",
    4:"four",
    5:"five",
    6:"six",
    7:"seven",
    8:"eight",
    9:"nine",
   10:"ten",
   11:"eleven",
   12:"twelve",
   13:"thirteen",
   14:"fourteen",
   15:"fifteen",
   16:"sixteen",
   17:"seventeen",
   18:"eightteen",
   19:"nineteen",
   20:"twenty",
   30:"thirty",
   40:"forty",
   50:"fifty",
   60:"sixty",
   70:"seventy",
   80:"eighty",
   90:"ninety",
   100:"hundred"

}

key1=dic1.keys()
value1=dic1.values()

if a>=0 and a<=9:
   for i in dic1:
      if i==a:
         print(dic1[i])


if a>=10 and a<=19:
   for i in dic1:
      if i==a:
         print(dic1[i])


if a>=20 and a<=99:
   b=a%10
   o=a-b
   s2=0
   
   for i in dic1:
      if i==o:
         s1=dic1[i]
      if i==b:
         s2=dic1[i]
   
   print(s1, s2)
         