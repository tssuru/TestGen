try:
    def g(a,b):
        c=74
        if b>4:
            c=1
        if a>=-4:
             c=4
        else: 
            return 6
        return c
    
    print(g(1,3))
    
except: print('error')
