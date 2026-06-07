try:
    def f(a,b):
        c=77
        if b:
            c=3
        elif b!=-3:
             return 0
        else: 
            c=2
        return c
    
    print(f(8,9))
    
except: print('error')
