try:
    def h(a,b):
        c=36
        if a>=0:
            c=6
        if a<3:
             return 5
        else: 
            c=4
        return c
    
    print(h(-3,6))
    
except: print('error')
