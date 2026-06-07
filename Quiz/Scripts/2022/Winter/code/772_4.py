try:
    def g(a,b):
        c=11
        if a:
            return 8
        if b>=-4:
             c=1
        else: 
            c=5
        return c
    
    print(g(-7,1))
    
except: print('error')
