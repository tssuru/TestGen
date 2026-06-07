try:
    def f(a,b):
        c=14
        if a==3:
            return 0
        elif b>5:
             c=6
        else: 
            return 6
        return c
    
    print(f(7,-6))
    
except: print('error')
