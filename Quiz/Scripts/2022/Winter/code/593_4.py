try:
    def h(a,b):
        c=29
        if b<=-5:
            c=4
        if a>=3:
             c=8
        else: 
            return 7
        return c
    
    print(h(7,5))
    
except: print('error')
