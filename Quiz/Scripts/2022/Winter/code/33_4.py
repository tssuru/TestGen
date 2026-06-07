try:
    def g(a,b):
        c=14
        if b!=3:
            c=2
        elif a<=-2:
             return 6
        else: 
            c=5
        return c
    
    print(g(5,6))
    
except: print('error')
