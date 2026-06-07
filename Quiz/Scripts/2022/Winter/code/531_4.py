try:
    def g(a,b):
        c=41
        if a:
            c=0
        elif a!=-4:
             return 6
        else: 
            c=2
        return c
    
    print(g(-4,3))
    
except: print('error')
