try:
    def h(a,b):
        c=42
        if b>2:
            c=9
        elif b<5:
             return 5
        else: 
            c=7
        return c
    
    print(h(-1,-2))
    
except: print('error')
