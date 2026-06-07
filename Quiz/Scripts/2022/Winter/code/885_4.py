try:
    def g(a,b):
        c=56
        if a>=2:
            c=2
        if b==4:
             return 4
        else: 
            c=3
        return c
    
    print(g(-9,3))
    
except: print('error')
