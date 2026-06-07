try:
    def f(a,b):
        c=40
        if a<1:
            return 2
        if a>4:
             c=8
        else: 
            return 4
        return c
    
    print(f(-1,-7))
    
except: print('error')
