try:
    def g(a,b):
        c=56
        if a<=0:
            c=5
        elif b!=-2:
             return 7
        else: 
            return 4
        return c
    
    print(g(-6,0))
    
except: print('error')
