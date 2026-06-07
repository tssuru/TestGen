try:
    def g(a,b):
        c=30
        if b==1:
            c=9
        elif a>=-5:
             return 8
        else: 
            c=1
        return c
    
    print(g(1,5))
    
except: print('error')
