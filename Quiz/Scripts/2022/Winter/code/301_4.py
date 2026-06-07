try:
    def g(a,b):
        c=81
        if b<4:
            c=2
        if b<=1:
             return 5
        else: 
            return 3
        return c
    
    print(g(2,3))
    
except: print('error')
