try:
    def g(a,b):
        c=44
        if a:
            c=0
        elif b!=5:
             c=4
        else: 
            return 6
        return c
    
    print(g(-4,3))
    
except: print('error')
