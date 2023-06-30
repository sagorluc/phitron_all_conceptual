class Product:
    def __init__(self, name, price, quantity) -> None:
        self.prod_name = name
        self.prod_price = price
        self.prod_quantity = quantity

class Store:
    def __init__(self) -> None:
        self.__prodd_price = {} # protected
        self.__prodd_quantity = {}
        self.__profit = 0
    
    def add_product(self, name, price, quantity):

        product = Product(name,price,quantity)

        self.__prodd_price[product.prod_name] = product.prod_price # key and value
        self.__prodd_quantity[product.prod_name] = product.prod_quantity # key and value

    def buy_product(self, name, quantity):

        if name in self.__prodd_quantity:
                if self.__prodd_quantity[name] >= quantity:
                    # profit calculation
                    self.__profit = self.__profit + (5*self.__prodd_price[name])/100 * quantity
                    print("profit of 5%: ",self.__profit)
                    # deduction quantity
                    self.__prodd_quantity[name] = self.__prodd_quantity[name] - quantity
                    print('thank you')
                else:
                    print('unaviable')
        else:
            print('not found')

    def show_product(self) -> str:
        print(f"all product price: {self.__prodd_price}")
        print(f"all product quantity: {self.__prodd_quantity}")



class Shop(Store):
    def __init__(self, name) -> None:
        self.shop_name = name
        super().__init__()


shop1 = Shop('pasha comerce')

shop1.add_product('iphoneX', 400, 10)
shop1.add_product('samsungA10', 500, 35)

shop1.show_product()

shop1.buy_product('iphoneX', 2)
shop1.show_product()

shop1.buy_product('samsungA10', 5)
shop1.show_product()

shop2 = Shop('kabila comerce')
shop2.add_product('macbook',800, 5)
shop2.buy_product('macbook',1)
shop2.show_product()
