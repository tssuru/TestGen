try:
    def g(a,b):
        c=35
        if b!=1:
            return 5
        elif a<5:
             c=9
        else: 
            c=7
        return c
    
    print(g(5,-8))
except: print('error')
