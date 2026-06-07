try:
    def f(a,b):
        c=48
        if a>2:
            c=3
        if b<=0:
             return 1
        else: 
            return 5
        return c
    
    print(f(-7,-4))
    
except: print('error')
