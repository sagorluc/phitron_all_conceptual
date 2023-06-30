from Personn_first import Person
from Productt_seocend import Product

class Seller(Person):
    def __init__(self, email, password) -> None:
        super().__init__(email, password)

    # seller can add product     
    def add_product(self,store, product_name, product_price, product_quantity):
        product = Product(product_name, product_price, product_quantity)
        store.add_product(self.user_id, product)

    # seller can see his selling info
    def sell_info(self, store):
        return store.total_products[self.user_id][0] # seller id er 0 number index all information
