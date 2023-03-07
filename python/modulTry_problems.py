

    #1-PROBLEM
#%%
dabl="c"
input_number="0"
i=1
sum_number=0

print("Enter numbers [c for cancel]:")
while input_number!=dabl:
    try:
        input_number=input()
    

        if dabl==input_number:
            break
        else:
        
            sum_number+=int(input_number)
    except ValueError:
        print("Something else went wrong")

    i+=1
    
print(f"Sum of {i-1} numbers: {sum_number}")
    



    #2-PROBLEM
#%%

while True:
     try:
        a=int(input("Enter number1:"))
        b=int(input("Enter number2:"))

        input_choose=input("Choose [+, -, /, *]:")

        if input_choose=="+":
             print(a+b)           


        if input_choose=="-":
             print(a-b)
        

        if input_choose=="*":
             print(a*b)
        

        if input_choose=="/":
             print(a/b)
        break
     
     except ValueError:
         print("Only enter number.")
     
     except ZeroDivisionError:
         print("Cannot be divided by zero")         


# 3-PROBLEM
# %%

from random import randint as rd

number=rd(1,100)
print(number)

class ValueLessError(Exception):
    pass
class ValueMoreError(Exception):
    pass
class NoAttemptError(Exception):
    pass


i=0
while i<=3:
    try:
        choose=int(input("Enter number:"))

        if choose<number:
            raise ValueLessError
           
        
        if choose>number:
            raise ValueMoreError
           

        if i==3:
            raise NoAttemptError
            break
        
        if number==choose:
            print("Done")
            break


    except ValueLessError:
        print("ValueLessError")
        i+=1
    except ValueMoreError:
        print("ValueMoreError")
        i+=1
    except NoAttemptError:
        print("NoAttemptError")



#4-PROBLEM
# %%

class LengthMismatchError(Exception):
    pass

class CaseMismatchError(Exception):
    pass

class FullMismatchError(Exception):
    pass

class SameWord(Exception):
    pass


try:
    word1=input("Enter password")
    word2=input("Re-type password")

    word_set1=set(word1)
    word_set2=set(word2)

    dif=0


    if len(word_set1)>len(word_set2) or len(word_set1)<len(word_set2):
        raise LengthMismatchError
    
    dif=word_set1.difference(word_set2)
   

    if len(dif)==1:
           raise CaseMismatchError   

    if dif==0:
        raise SameWord
            

    if len(dif)>1:
        raise FullMismatchError


except LengthMismatchError:
    print("LengthMismatchError")

except CaseMismatchError:
    print("CaseMismatchError")

except FullMismatchError:
    print("FullMismatchError")

except SameWord:
    print("Same words")

# %%
