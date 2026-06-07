try:
    def h(a,b):
        c=53
        if a:
            c=6
        elif b==0:
             return 5
        else: 
            return 1
        return c
    
    print(h(-7,-9))
    
except: print('error')
