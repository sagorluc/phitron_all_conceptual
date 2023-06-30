from Personn_first import Person 


class Woner(Person):
    def __init__(self, email, password) -> None:
        super().__init__(email, password)
        
        self.total_product_sell = 0
        self.total_amount_sell = 0
        self.total_profit_amount = 0

    def show_all_info(self, store):
        all_seller_id = store.total_products.keys() # get store all product keys
        print(all_seller_id)
        for seller_id in all_seller_id:
            #print(seller_id)
            sell_info = store.total_products[seller_id][0] # seller_id key and [0] value
            #print(sell_info)
            self.total_product_sell += sell_info['total_sell_product']
            print
            self.total_amount_sell += sell_info['total_sell_amount']
            self.total_profit_amount +=  sell_info['total_sell_profit']/3
            # return all the value
            sell_infoo = {
                "total_sell_product" : self.total_product_sell,
                "total_sell_amount" : self.total_amount_sell,
                "total_sell_profit" : self.total_profit_amount
            }

            return sell_infoo