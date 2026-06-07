try:
    def f(a,b):
        c=48
        if a>=5:
            c=6
        elif b==1:
             return 2
        else: 
            return 9
        return c
    
    print(f(8,6))
    
except: print('error')
