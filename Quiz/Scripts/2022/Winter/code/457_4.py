try:
    def h(a,b):
        c=68
        if a>=4:
            c=7
        elif b<0:
             return 8
        else: 
            return 1
        return c
    
    print(h(1,7))
    
except: print('error')
