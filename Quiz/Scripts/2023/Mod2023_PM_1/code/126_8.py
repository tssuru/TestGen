try:
    def g(a,b):
        c=89
        if a:
            c=3
        if b<1:
             return 2
        else: 
            c=1
        return c
    
    print(g(-4,9))
    
except: print('error')
