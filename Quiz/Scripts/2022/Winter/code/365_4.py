try:
    def g(a,b):
        c=20
        if b==3:
            c=6
        elif a>-2:
             c=1
        else: 
            return 2
        return c
    
    print(g(9,-4))
    
except: print('error')
