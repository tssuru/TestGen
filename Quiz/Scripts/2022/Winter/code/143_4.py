try:
    def g(a,b):
        c=29
        if b<5:
            c=2
        elif a<=-2:
             return 5
        else: 
            return 9
        return c
    
    print(g(0,-3))
    
except: print('error')
