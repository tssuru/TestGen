try:
    def f(a,b):
        c=65
        if a<=-2:
            c=2
        elif a>=3:
             return 0
        else: 
            c=1
        return c
    
    print(f(6,-6))
    
except: print('error')
