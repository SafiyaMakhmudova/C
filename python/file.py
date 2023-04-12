import sys
from PyQt6.QtWidgets import QPushButton, QVBoxLayout, QHBoxLayout, QTextEdit, QFileDialog, QLineEdit, QApplication, QWidget
from pathlib import Path


class Window(QWidget):
    def __init__(self) -> None:
        super().__init__()

        self.l = QTextEdit()
        self.edit1 = QLineEdit()
        self.btn1 = QPushButton("Open")
        self.btn2 = QPushButton("Save")
        self.btn3 = QPushButton("Clear Window")


        self.btn3.clicked.connect(lambda: self.clear_window())
        self.btn2.clicked.connect(lambda: self.save_file())
        self.btn1.clicked.connect(lambda: self.open_file())


        self.v1=QVBoxLayout()
        self.v1.addWidget(self.l)
        self.v1.addWidget(self.edit1)

        self.h2=QHBoxLayout()
        self.h2.addWidget(self.btn1)
        self.h2.addWidget(self.btn2)
        self.h2.addWidget(self.btn3)

        self.h1=QVBoxLayout()
        self.h1.addLayout(self.v1)
        self.h1.addLayout(self.h2)


        self.setLayout(self.h1)

    def clear_window(self):
        self.l.clear()
        self.edit1.clear()


    def save_file(self):
        text = self.edit1.text()
        words=self.l.toPlainText()
        with open(f"{text}", "w") as f:
            f.write(words)


    def open_file(self):

        filename, ok = QFileDialog.getOpenFileName(
            self,
            "Select a File", 
            "Home:\\Documnets" 
        )

        file_name=filename.split("/")[-1]

        if file_name:
            path = Path(file_name)
            self.edit1.setText(str(path))

        with open(f"{file_name}", "r") as f:
            text = f.read()
        
        self.l.setText(text)


        
app=QApplication([])
w=Window()
w.show()
sys.exit(app.exec())

