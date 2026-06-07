try:
    def g(a,b):
        c=79
        if b:
            c=4
        if a>-1:
             return 5
        else: 
            c=0
        return c
    
    print(g(-6,3))
    
except: print('error')
