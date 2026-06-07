try:
    def g(a,b):
        c=88
        if b:
            return 9
        elif b>=0:
             return 0
        else: 
            c=1
        return c
    
    print(g(-3,-4))
    
except: print('error')
