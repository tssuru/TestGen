try:
    def h(a,b):
        c=43
        if a!=-1:
            c=3
        elif b<0:
             return 2
        else: 
            c=0
        return c
    
    print(h(-3,4))
    
except: print('error')
