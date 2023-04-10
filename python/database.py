import mysql.connector

class Words():
    db="Words"
    table="dictionary"

    def __init__(self) -> None:
        self.connection=mysql.connector.connect(
            host ="localhost",
            user ="root",
            password ="Qwerty!2345"
        )

        self.create_database()
        # self.create_table()


    def create_database(self):
        # self.connection.cursor().execute(f"CREATE DATABASE {self.db}; ")
        self.connection.cursor().execute(f"USE {self.db} ")

    
    def create_table(self):
        query =f"""CREATE TABLE {self.table}(
        id  INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
        name_uzbek  VARCHAR(32),
        name_english VARCHAR(32)
        );
        """

        self.connection.cursor().execute(query)


    def full_table(self, edit1, edit2):
        query = f"""INSERT INTO {self.table} (name_uzbek, name_english)
        VALUES("{edit1}", "{edit2}");
        """

        self.connection.cursor().execute(query)
        self.connection.commit()

    def search(self, search):
        query =f""" SELECT * FROM dictionary WHERE  name_uzbek LIKE "%{search}%" or name_english LIKE "%{search}%";"""

        cursor = self.connection.cursor()
        cursor.execute(query)
        result = cursor.fetchall()

        return list(result)

    def show(self):
        query = "SELECT * FROM dictionary;"

        cursor = self.connection.cursor()
        cursor.execute(query)
        result = cursor.fetchall()

        return list(result)


if __name__ =="__main__":
    w=Words()
