try:
    def g(a,b):
        c=50
        if a==0:
            c=3
        elif a>-5:
             return 2
        else: 
            c=5
        return c
    
    print(g(3,8))
    
except: print('error')
