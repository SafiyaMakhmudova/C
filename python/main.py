from database import Words
import sys
from PyQt6.QtWidgets import QWidget, QVBoxLayout, QHBoxLayout, QLineEdit, QPushButton,  QApplication, QListWidget

a = Words()


class Window(QWidget):
    def __init__(self) -> None:
        super().__init__()
        self.c=0
        
        self.edit1 = QLineEdit()
        self.edit2 = QLineEdit()
        self.btn=QPushButton("+")
        self.l=QListWidget()
        self.edit3 =QLineEdit()



        self.edit1.setPlaceholderText("Uzbek")
        self.edit2.setPlaceholderText("English")
        self.edit3.setPlaceholderText("Enter word for search ")
        
        self.btn.clicked.connect(lambda:self.addWords())
        self.edit3.textChanged.connect(lambda:self.search())

        self.h1 =QHBoxLayout()
        self.h1.addWidget(self.edit1)
        self.h1.addWidget(self.edit2)
        self.h1.addWidget(self.btn)


        self.v1=QVBoxLayout()
        self.v1.addLayout(self.h1)
        self.v1.addWidget(self.l)
        self.v1.addWidget(self.edit3)
        
        self.setLayout(self.v1)
        self.select1()

    
    def select1(self):
        ls = a.show()
        for i in ls:
            self.l.addItem(f" {i[0]}. {i[1]}-{i[2]}")  
        
        
            

    def addWords(self):
        one = self.edit1.text()
        two = self.edit2.text()
        
        if one != "" and two != "":
            a.full_table(one, two)
        
        ls=a.show()

        self.l.clear()
        for i in ls:
            self.l.addItem(f" {i[0]}. {i[1]}-{i[2]}")            
        
        self.edit1.setText("")
        self.edit2.setText("")

        

    def search(self):
        one = self.edit3.text()
        s1=a.search(one)
        self.l.clear()

        for i in s1:
            self.l.addItem(f"{i[0]}. {i[1]}-{i[2]}")




app=QApplication([])
w=Window()
w.show()
sys.exit(app.exec())