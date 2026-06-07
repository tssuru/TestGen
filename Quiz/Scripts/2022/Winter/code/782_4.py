try:
    def g(a,b):
        c=65
        if b<=2:
            return 4
        if a!=1:
             c=8
        else: 
            return 9
        return c
    
    print(g(-4,-2))
    
except: print('error')
