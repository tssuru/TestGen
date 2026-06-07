try:
    def f(a,b):
        c=10
        if b!=1:
            return 1
        if b>=-1:
             c=6
        else: 
            return 4
        return c
    
    print(f(-7,9))
    
except: print('error')
