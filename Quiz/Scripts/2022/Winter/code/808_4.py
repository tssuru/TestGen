try:
    def g(a,b):
        c=86
        if b:
            c=7
        elif a!=0:
             return 5
        else: 
            c=6
        return c
    
    print(g(1,2))
    
except: print('error')
