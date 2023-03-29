
import requests

class User:
    def __init__(self, holder: str, card: str, amount: float, valuta: str):
        self.__holder=holder
        self.__card=card
        self.__amount=amount
        self.__valuta=valuta
        
    def get_name(self):
        return self.__holder

    
    def get_currency(self):
        return self.__valuta
    
    
    def add_money(self, obj:float):
        self.__amount+=obj

    
    def get_money(self, obj: float)-> bool:
        if self.__amount<=obj: 
            return False
        else:
            self.__amount-=obj 
            return True

    
    def __str__(self)->str :
        return f"""
                CARD INFO:
            HOLDER: {self.__holder}
            CARD: {self.__card}
            AMOUNT: {self.__amount} {self.__valuta}
        """
    
        
class Transaction:
    def __init__(self):
        self.__sender=str()
        self.__receiver=str()
        self.__amount=float()
        self.__timestamp= str()
        self.__transfer_rate={"USD": float(), "RUBL": float()}
        self.__status=bool()
        self.__set_transfer_rates()

    def __set_transfer_rates(self):
        url="https://nbu.uz/uz/exchange-rates/json/"
        request=requests.get(url).json()
        
        for item in request:
            if item["code"]=="RUB":
                self.__transfer_rate["RUB"]=float(item["cb_price"])
            elif item["code"]=="USD":
                self.__transfer_rate["USD"]=float(item["cb_price"])

        self.__transfer_rate["UZB"]=1

    def __current_timestamp(self):
        from datetime import datetime
        self.__timestamp=datetime.now()


    def make_transaction(self, sender:User, receiver:User, amount:float):
       self.__sender=sender
       self.__receiver=receiver
       self.__amount=amount
       self.__current_timestamp()
       self.__transfer_money()

    
    def __transfer_money(self):
        receive=self.__amount/self.__transfer_rate[self.__sender.get_currency()]
        send=self.__amount/self.__transfer_rate[self.__receiver.get_currency()]

        if self.__sender.get_money(receive):
            self.__receiver.add_money(send)
            self.__status=True
        else:
            self.__status=False
   
    def __str__(self)->str:
        return f"""

                TRANSACTION
            SENDER: {self.__sender.get_name()} ({self.__sender.get_currency()})
            RECEIVER: {self.__receiver.get_name()} ({self.__receiver.get_currency()})
            AMOUNT: {self.__amount} UZS. TRANSFER TIMESTAMP: {self.__timestamp}
            STATUS: {"SUCCESS" if self.__status else "FAILURE"}
        
            """

if __name__=="__main__":
    u1 = User("Adam Jones", "1234 4567 7890 1357", 567.9, "USD")
    u2 = User("Mikhail Ivanov", "3873 1823 0293 0606", 3847.1, "RUB")

    print(u1)
    print(u2)

    tr1 = Transaction()

    tr1.make_transaction(u1, u2, 300000)
    print(tr1)

    print(u1)
    print(u2)
