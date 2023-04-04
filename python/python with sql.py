import mysql.connector


class Employees:
    __db = "n19_usersdb"
    __table = "users"


    def __init__(self) -> None:
        self.__connection=mysql.connector.connect(
            host="localhost",
            user="root",
            password="Qwerty!2345"
        )
        
        self.__create_database()
        self.__create_table()




    def __create_database(self):
        self.__connection.cursor().execute(f"CREATE DATABASE IF NOT EXISTS {self.__db};")
        self.__connection.cursor().execute(f"USE {self.__db}")


    def __create_table(self):
       query = f'''CREATE TABLE IF NOT EXISTS {self.__table}(
           id INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
           first_name VARCHAR(16),
           last_name VARCHAR(16),
           login VARCHAR(16) UNIQUE NOT NULL,
           password VARCHAR(16)
       )
       '''
       self.__connection.cursor().execute(query)

    def create_user(self, first, last, login, pswd):
        query =f'''INSERT INTO {self.__table} (first_name, last_name, login, password)
        VALUES ("{first}", "{last}", "{login}", "{pswd}");
        '''

        self.__connection.cursor().execute(query)
        self.__connection.commit()

    def list_all_users(self):
        query ="SELECT * FROM users;"
        cursor = self.__connection.cursor()
        cursor.execute(query)

        result= cursor.fetchall()
        for i in result:
            if  i == "),":
                print("\n")
            
            else:
                print(*i ,"|")


    def Edit(self, id_new, name_new, last_new, login_new, pswd_new):
        query = f"""UPDATE users SET 
        first_name="{name_new}", 
        last_name="{last_new}",  
        login="{login_new}", 
        password="{pswd_new} " 
        WHERE id="{id_new}";
        """

        self.__connection.cursor().execute(query)
        self.__connection.commit()


    def Search(self, name):
        query = f"""SELECT * FROM {self.__table} WHERE first_name="{name}";
        """

        cursor = self.__connection.cursor()
        cursor.execute(query)

        result= cursor.fetchall()
        for i in result:
            if  i == "),":
                print("\n")
            
            else:
                print(*i ,"|") 




    def close(self):
        self.__connection.close()



if __name__ == "__main__":
    emp = Employees()

    while True:
        u=int(input("""
        1.Create a new user
        2.Show all
        3.Edit
        4.Search
        5.Exit
        >>>    
        """))
    
        if u == 1:
            f=input("Enter first name:")
            l=input("Enter last name:")
            login=input("Your login:")
            pswd=input("Password:")
            emp.create_user(f, l, login, pswd)    
       
        elif u==2:
            emp.list_all_users()
            
        
        elif u == 3:
            id=int(input("Enter ID: "))
            f_n=input("Enter new name: ")
            l_n=input("Enter new last name: ")
            lo_n=input("Enter new login: ")
            p_n = input("Enter new password:")

            emp.Edit(id, f_n, l_n, lo_n, p_n)
        
        elif u == 4:
            name=input("Enter name: ")
            data =emp.Search(name)
            print(data)

        elif u == 5:
            emp.close()
            break
    
    