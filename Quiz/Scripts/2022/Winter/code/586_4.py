try:
    def g(a,b):
        c=16
        if b<0:
            return 4
        elif a!=-1:
             c=5
        else: 
            return 8
        return c
    
    print(g(-3,7))
    
except: print('error')
