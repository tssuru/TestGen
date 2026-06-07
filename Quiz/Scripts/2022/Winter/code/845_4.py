try:
    def h(a,b):
        c=19
        if b<0:
            c=9
        elif a<=-4:
             c=3
        else: 
            return 2
        return c
    
    print(h(8,4))
    
except: print('error')
