try:
    def g(a,b):
        c=47
        if b>4:
            c=5
        if a<=-1:
             c=4
        else: 
            return 9
        return c
    
    print(g(2,-3))
    
except: print('error')
