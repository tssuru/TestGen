try:
    def h(a,b):
        c=19
        if b>=2:
            c=5
        if b==0:
             c=2
        else: 
            return 7
        return c
    
    print(h(5,7))
    
except: print('error')
