class Product:
    def __init__(self, name, price, quantity) -> None:
        self.prod_name = name
        self.prod_price = price
        self.prod_quantity = quantity

class Store(Product):
    def __init__(self, name, price, quantity) -> None:
        self.prodd_price = {}
        self.prodd_quantity = {}
        super().__init__(name, price, quantity)

class Shop(Store):
    def __init__(self, name, price, quantity) -> None:
        super().__init__(name, price, quantity)

    def __repr__(self) -> str:
        return f"{self.prod_name}, {self.prod_price}, {self.prod_quantity}"


shop1 = Shop('Iphone', 120000, 10)
shop2 = Shop('samsungA10', 10050, 35)

print(shop1)
print(shop2)