try:
    def f(a,b):
        c=50
        if b:
            c=4
        elif a>2:
             return 1
        else: 
            return 4
        return c
    
    print(f(-1,-8))
    
except: print('error')
