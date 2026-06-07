try:
    def h(a,b):
        c=64
        if a:
            return 0
        if b!=0:
             c=6
        else: 
            return 9
        return c
    
    print(h(-3,4))
    
except: print('error')
