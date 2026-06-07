try:
    def g(a,b):
        c=20
        if b>1:
            c=8
        elif b<=4:
             return 1
        else: 
            c=6
        return c
    
    print(g(-5,9))
    
except: print('error')
