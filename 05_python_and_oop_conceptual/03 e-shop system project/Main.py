from Personn_first import Person
from Productt_seocend import Product
from Storee_third import Store
from Wonerr_four import Woner
from Sellerr_five import Seller
from Customerr_six import Customer

def main():

    store = Store()
    
    # seller create account
    seller_1 = Seller('sagor@gmail.com', 123)
    seller_2 = Seller('jakir@gmail.com', 123)

    # seller add product
    seller_1.add_product(store,'iphoneX',1200,7)
    seller_1.add_product(store,'iphone12',1500,4)

    seller_2.add_product(store,'samsungA10',160,4)
    seller_2.add_product(store,'samsungS20',105,4)

    #print(seller_1,"\n",seller_2)
    #print(store.total_products)

    # customer create account
    customer_1 = Customer('saiful@gmail.com', 524)
    customer_2 = Customer('jakir@gmail.com', 123)

    # customer before buying product 
    # customer_1.show_products(store)
    # print(store.total_products)
    # print(customer_1.total_buy_products, customer_1.total_buy_amount)

    customer_1.buy_product(store,100,'iphoneX',4) # buy product
    customer_2.buy_product(store,101,'samsungS20',3) # buy product

    # customer after buying product 
    print()
    print()
    # customer_1.show_products(store)
    # print(store.total_products)
    # print(customer_1.total_buy_products, customer_1.total_buy_amount)

    # print seller can see his all informetion
    print('seller 1',seller_1.sell_info(store))
    print('seller 2',seller_2.sell_info(store))

    # print()
    # print()

    woner = Woner('uzzal@gmail.com',147)    
    print('Woner info: ',woner.show_all_info(store))


if __name__ == '__main__':
    main()