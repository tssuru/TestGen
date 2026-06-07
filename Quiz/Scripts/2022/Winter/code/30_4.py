try:
    def h(a,b):
        c=16
        if b>0:
            c=5
        if b==5:
             c=0
        else: 
            return 3
        return c
    
    print(h(-6,-1))
    
except: print('error')
