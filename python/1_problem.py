import datetime


class User:
    def __init__(self, holder, card, amount,valuta):
        self.holder=holder
        self.card=card
        self._amount=amount
        self.valuta=valuta
        
    def prints(self):
        print(f"""
                CARD INFO:
            HOLDER: {self.holder}
            CARD: {self.card}
            AMOUNT: {self._amount} {self.valuta}
        """)
    
class Transaction:
    def _set_transfer_rates(self,v1, v2):
        self.v1=v1
        self.v2=v2
        #print(self.v1, self.v2)


    def make_transaction(self, u1, u2, p):
        if u1.valuta=="USD":
            u1._amount-=p/self.v1
        if u2.valuta=="RUB":
            u2._amount+=p/self.v2
            

        ct = datetime.datetime.now()    
        print(f"""

                TRANSACTION
            SENDER: {u1.holder} ({u1.valuta})
            RECEIVER: {u2.holder} ({u2.valuta})
            AMOUNT: {p} UZS. TRANSFER TIMESTAMP: {ct}
            STATUS: SUCCESS
        
        """)


u1 = User("Adam Jones", "1234 4567 7890 1357", 567.9, "USD")
u2 = User("Mikhail Ivanov", "3873 1823 0293 0606", 3847.1, "RUB")

u1.prints()
u2.prints()

tr1 = Transaction()
tr1._set_transfer_rates(11340, 147.17)

tr1.make_transaction(u1, u2, 300000)
print(tr1)

u1.prints()
u2.prints()