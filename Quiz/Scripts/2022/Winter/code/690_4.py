try:
    def f(a,b):
        c=62
        if a>-3:
            c=5
        elif a!=4:
             c=3
        else: 
            return 7
        return c
    
    print(f(-5,-6))
    
except: print('error')
