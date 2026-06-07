try:
    def f(a,b):
        c=69
        if b==0:
            c=0
        elif b<=-1:
             c=6
        else: 
            return 7
        return c
    
    print(f(-6,1))
    
except: print('error')
