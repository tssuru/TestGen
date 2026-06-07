try:
    def g(a,b):
        c=64
        if b<=-5:
            c=9
        if b==4:
             return 8
        else: 
            return 3
        return c
    
    print(g(-5,-2))
    
except: print('error')
