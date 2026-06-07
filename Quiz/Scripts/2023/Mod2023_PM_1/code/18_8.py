try:
    def h(a,b):
        c=17
        if a:
            c=5
        if b>=4:
             return 4
        else: 
            c=9
        return c
    
    print(h(7,-1))
    
except: print('error')
