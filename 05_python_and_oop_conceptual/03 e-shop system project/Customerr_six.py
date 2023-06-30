from Personn_first import Person
from Wonerr_four import Woner

class Customer(Person):
    def __init__(self, email, password) -> None:
        super().__init__(email, password)
        self.total_buy_amount = 0
        self.total_buy_products = 0

    # customer can see all the producs of store   
    def show_products(self, store):
        all_seller_key = store.total_products.keys() # get product seller id
        
        for seller_id in all_seller_key:
            print('*'*18)
            print('seller-id: ',seller_id)
            print('*'*18)
            for index in range(1,len(store.total_products[seller_id])):
                product = store.total_products[seller_id]
                print(product[index])

    # customer can buy product as he/her wish
    def buy_product(self,store, seller_id, product_name, quantity):
        #print(store.total_products)
        #print(store.total_products[seller_id])
    
        for index in range(1, len(store.total_products[seller_id])):
                product = store.total_products[seller_id][index] # dictionary key(seller id) and value(index)

                if product['name'] == product_name:
                    #print(product)
                    # add customer buying informetion
                    if product['quantity'] >= quantity:                    
                        product['quantity'] -= quantity
                        self.total_buy_products += quantity
                        self.total_buy_amount += product['price'] * quantity

                        # add to seller selling informetion 
                        seller = store.total_products[seller_id][0]
                        seller['total_sell_product'] += quantity # total product sell
                        seller['total_sell_amount'] += product['price'] * quantity # total sell amount
                        seller['total_sell_profit'] += (product['price']/10) * quantity # 10% profit
                    else:
                        print('over of available quantity')
        