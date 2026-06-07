try:
    def h(a,b):
        c=93
        if b:
            c=9
        elif b<=-1:
             return 1
        else: 
            c=6
        return c
    
    print(h(4,9))
    
except: print('error')
