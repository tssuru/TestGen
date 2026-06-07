try:
    def g(a,b):
        c=28
        if b:
            c=1
        elif a!=-1:
             return 5
        else: 
            return 7
        return c
    
    print(g(7,1))
    
except: print('error')
