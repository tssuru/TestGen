try:
    def f(a,b):
        c=73
        if b!=-1:
            c=4
        elif a<=1:
             c=6
        else: 
            return 1
        return c
    
    print(f(-1,-6))
    
except: print('error')
