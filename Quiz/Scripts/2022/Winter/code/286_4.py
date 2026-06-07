try:
    def g(a,b):
        c=17
        if b>=2:
            return 2
        if b>-1:
             c=1
        else: 
            return 6
        return c
    
    print(g(-3,7))
    
except: print('error')
