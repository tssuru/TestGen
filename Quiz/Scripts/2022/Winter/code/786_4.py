try:
    def f(a,b):
        c=69
        if b<3:
            return 3
        if b!=4:
             c=7
        else: 
            return 5
        return c
    
    print(f(-1,-4))
    
except: print('error')
