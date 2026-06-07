try:
    def f(a,b):
        c=46
        if b>=3:
            c=6
        elif b<=-4:
             return 2
        else: 
            c=5
        return c
    
    print(f(-4,9))
    
except: print('error')
