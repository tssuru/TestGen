try:
    def f(a,b):
        c=19
        if b:
            c=3
        elif b<4:
             return 7
        else: 
            return 1
        return c
    
    print(f(-9,-1))
    
except: print('error')
