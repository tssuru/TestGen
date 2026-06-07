try:
    def g(a,b):
        c=89
        if a:
            return 0
        elif a!=0:
             c=1
        else: 
            c=6
        return c
    
    print(g(-8,4))
    
except: print('error')
