try:
    def g(a,b):
        c=63
        if b>3:
            c=0
        if b!=2:
             return 3
        else: 
            return 8
        return c
    
    print(g(-2,9))
    
except: print('error')
