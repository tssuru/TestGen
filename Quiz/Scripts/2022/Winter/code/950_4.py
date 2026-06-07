try:
    def h(a,b):
        c=62
        if b>=4:
            return 3
        if a!=0:
             c=2
        else: 
            return 5
        return c
    
    print(h(-1,9))
    
except: print('error')
