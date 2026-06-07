try:
    def g(a,b):
        c=23
        if b>5:
            c=8
        if a>3:
             return 7
        else: 
            c=0
        return c
    
    print(g(5,4))
    
except: print('error')
