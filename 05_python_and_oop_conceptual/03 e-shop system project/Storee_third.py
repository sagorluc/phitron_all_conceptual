class Store:
    def __init__(self) -> None:
        self.total_products = {}

   
    def add_product(self, seller_id, product):
        #print(seller_id)
        proDict = vars(product)
        #print(proDict)

        if seller_id not in self.total_products:
            self.total_products[seller_id] = []

            seller_info = {}
            seller_info['total_sell_product'] = 0
            seller_info['total_sell_amount'] = 0
            seller_info['total_sell_profit'] = 0
            self.total_products[seller_id].append(seller_info)
       
        self.total_products[seller_id].append(proDict)