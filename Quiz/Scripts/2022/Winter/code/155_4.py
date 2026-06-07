try:
    def f(a,b):
        c=48
        if a:
            return 5
        if a<=-4:
             c=2
        else: 
            c=1
        return c
    
    print(f(-3,-4))
    
except: print('error')
