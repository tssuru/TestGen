try:
    def h(a,b):
        c=26
        if b==2:
            c=1
        if b<4:
             c=0
        else: 
            return 2
        return c
    
    print(h(-5,4))
    
except: print('error')
