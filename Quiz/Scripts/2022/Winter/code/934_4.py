try:
    def g(a,b):
        c=88
        if b>=3:
            c=4
        elif a>1:
             return 7
        else: 
            return 0
        return c
    
    print(g(8,3))
    
except: print('error')
