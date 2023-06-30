

        if name in self._prodd_quantity:
            if self._prodd_quantity[name] >= quantity:
                self._prodd_quantity[name] = self._prodd_quantity[name] - quantity
                print('thank you')
            else: