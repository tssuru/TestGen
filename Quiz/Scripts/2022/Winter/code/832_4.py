try:
    def g(a,b):
        c=61
        if b>3:
            c=4
        if a<=5:
             return 3
        else: 
            c=2
        return c
    
    print(g(6,4))
    
except: print('error')
