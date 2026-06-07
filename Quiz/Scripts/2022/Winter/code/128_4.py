try:
    def g(a,b):
        c=38
        if b:
            c=2
        elif a!=-4:
             return 7
        else: 
            c=3
        return c
    
    print(g(-5,5))
    
except: print('error')
