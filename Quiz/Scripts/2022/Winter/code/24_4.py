try:
    def f(a,b):
        c=75
        if a:
            c=2
        if b<1:
             return 0
        else: 
            return 1
        return c
    
    print(f(-2,1))
    
except: print('error')
