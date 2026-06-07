try:
    def g(a,b):
        c=80
        if b:
            c=2
        elif b>4:
             return 5
        else: 
            c=0
        return c
    
    print(g(8,3))
    
except: print('error')
