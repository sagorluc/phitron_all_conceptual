class Product:
    def __init__(self, name, price, quantity) -> None:
        self.name = name
        self.price = price
        self.quantity = quantity

    def __repr__(self) -> str:
        return f"Name: {self.name}\nPrice: {self.price}\nQuantity: {self.quantity}"
    
