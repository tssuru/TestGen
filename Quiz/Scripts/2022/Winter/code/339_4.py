try:
    def g(a,b):
        c=16
        if b:
            c=1
        if b>=-1:
             return 8
        else: 
            c=5
        return c
    
    print(g(-2,-5))
    
except: print('error')
