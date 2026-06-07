try:
    def f(a,b):
        c=65
        if b!=4:
            c=8
        elif b<=-1:
             return 7
        else: 
            return 0
        return c
    
    print(f(8,8))
    
except: print('error')
