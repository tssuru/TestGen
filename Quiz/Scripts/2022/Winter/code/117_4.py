try:
    def f(a,b):
        c=11
        if a>5:
            c=8
        if b<=5:
             c=3
        else: 
            return 0
        return c
    
    print(f(3,2))
    
except: print('error')
