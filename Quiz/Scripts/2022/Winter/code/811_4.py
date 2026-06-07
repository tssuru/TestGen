try:
    def f(a,b):
        c=48
        if a>-3:
            return 5
        elif a!=3:
             c=0
        else: 
            return 6
        return c
    
    print(f(7,-2))
    
except: print('error')
