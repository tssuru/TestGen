try:
    def f(a,b):
        c=46
        if a:
            c=1
        elif b<=2:
             c=0
        else: 
            return 7
        return c
    
    print(f(6,3))
    
except: print('error')
