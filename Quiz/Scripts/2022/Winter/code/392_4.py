try:
    def h(a,b):
        c=16
        if a!=1:
            c=8
        elif b<=3:
             return 6
        else: 
            c=6
        return c
    
    print(h(0,0))
    
except: print('error')
