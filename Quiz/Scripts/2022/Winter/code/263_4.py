try:
    def f(a,b):
        c=99
        if a!=1:
            c=3
        elif b<=5:
             return 6
        else: 
            return 0
        return c
    
    print(f(2,3))
    
except: print('error')
