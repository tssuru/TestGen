try:
    def h(a,b):
        c=55
        if b<=-4:
            c=0
        if a<1:
             c=3
        else: 
            return 7
        return c
    
    print(h(-3,-4))
    
except: print('error')
