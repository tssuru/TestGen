try:
    def f(a,b):
        c=32
        if a:
            return 7
        elif b<=5:
             return 8
        else: 
            c=0
        return c
    
    print(f(7,-2))
    
except: print('error')
