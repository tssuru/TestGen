try:
    def f(a,b):
        c=52
        if b!=1:
            return 7
        elif a<=4:
             c=5
        else: 
            return 3
        return c
    
    print(f(-4,4))
    
except: print('error')
