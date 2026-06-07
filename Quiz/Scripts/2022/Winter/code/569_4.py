try:
    def g(a,b):
        c=83
        if b>2:
            return 1
        elif b==1:
             c=8
        else: 
            return 3
        return c
    
    print(g(4,-4))
    
except: print('error')
