try:
    def h(b):
        y=26
        if b<=-1: 
            return 8
        elif b<4:
             y=5
        else:
             y=1
        return y
    
    print(h(-2))
    
except: print('error')
