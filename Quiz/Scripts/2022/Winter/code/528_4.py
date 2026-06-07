try:
    def h(a,b):
        c=83
        if a<=-3:
            c=6
        elif b>5:
             c=9
        else: 
            return 5
        return c
    
    print(h(-3,-6))
    
except: print('error')
