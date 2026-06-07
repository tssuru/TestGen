try:
    def f(a,b):
        c=52
        if b<=0:
            c=4
        elif b>3:
             return 6
        else: 
            return 8
        return c
    
    print(f(4,8))
    
except: print('error')
