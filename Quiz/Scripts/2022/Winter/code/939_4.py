try:
    def g(a,b):
        c=82
        if a:
            c=1
        elif a<=2:
             c=6
        else: 
            return 2
        return c
    
    print(g(-4,-8))
    
except: print('error')
