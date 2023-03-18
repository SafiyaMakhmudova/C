errPass = "wrong password"
successMessage = "success"

class Card:
    def __init__(self, bank_name, name, number, data):
        self.bank_name = bank_name
        self.name = name
        self.number = number
        self.data = data
        self.__password = "1111"
        self._money = 0

    def hold_with_hand(self):
        return f"""
            Bank Nomi: {self.bank_name}
            Nomi: {self.name}
            {self.number}
            Amal qilish muddati: {self.data}
        """
    
    def set_password(self, old_pass, new_pass):
        if old_pass == self.__password:
            self.__password = new_pass
            return successMessage
        else:
            return errPass

    def __check_password(self, password):
        return True if password == self.__password else False

    def get_money(self, password):
        if self.__check_password(password):
            return self._money
        else:
            return errPass
        
    def add_money(self, password, val):
        if self.__check_password(password):            
            self._money += val
            return successMessage
        else:
            return errPass
        
    def sub_money(self, password, val):
        if self.__check_password(password):
            if self._money >= val:
                self._money -= val
                return successMessage
            else:
                return "You have not enough money!"
        else:
            return errPass
        

uzcard = Card("Humo", "Husan Musayev MUF", "8600123412347890", "05/27")

print(uzcard.hold_with_hand())
print(uzcard.get_money("1111"))
print(uzcard.set_password("1111", "8888"))
uzcard.add_money("8888", 1400)
print(uzcard.get_money("8888"))
print(uzcard.sub_money("8888", 1400))