try:
    def g(a,b):
        c=96
        if b>-3:
            c=7
        elif b<4:
             return 5
        else: 
            c=4
        return c
    
    print(g(-1,3))
    
except: print('error')
