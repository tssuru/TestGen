try:
    def h(a,b):
        c=12
        if a!=2:
            c=2
        elif b>5:
             c=1
        else: 
            return 4
        return c
    
    print(h(9,-3))
except: print('error')
