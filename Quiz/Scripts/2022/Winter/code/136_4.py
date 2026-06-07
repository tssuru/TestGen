try:
    def g(a,b):
        c=89
        if a==1:
            return 8
        if b>0:
             c=5
        else: 
            return 6
        return c
    
    print(g(-8,-9))
    
except: print('error')
