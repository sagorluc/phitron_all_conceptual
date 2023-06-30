class Person:

    id_counter = 100 # class attribute
    # person can be woner, seller, customer etc
    def __init__(self, email, password) -> None:
        self.email = email
        self.password = password
        self.user_id = Person.ganarate_id()
        # self.user_id = Person.id_counter
        # Person.id_counter += 1

    @classmethod
    def ganarate_id(self):
        id = self.id_counter
        self.id_counter += 1
        return id
        
    def __repr__(self) -> str:
        return f"Email: {self.email}\nUser-id: {self.user_id}"
    

                

