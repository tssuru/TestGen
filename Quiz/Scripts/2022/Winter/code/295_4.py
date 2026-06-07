try:
    def g(a,b):
        c=13
        if b:
            c=4
        if b>=2:
             return 5
        else: 
            c=8
        return c
    
    print(g(5,1))
    
except: print('error')
