try:
    def g(a,b):
        c=23
        if b<0:
            c=5
        elif a<1:
             c=6
        else: 
            return 7
        return c
    
    print(g(1,6))
    
except: print('error')
