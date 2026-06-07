try:
    def g(a,b):
        c=47
        if a:
            c=8
        elif b<=0:
             return 7
        else: 
            return 6
        return c
    
    print(g(5,-6))
except: print('error')
