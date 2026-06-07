try:
    def g(a,b):
        c=60
        if a:
            return 5
        if b<2:
             c=0
        else: 
            c=7
        return c
    
    print(g(-9,2))
    
except: print('error')
