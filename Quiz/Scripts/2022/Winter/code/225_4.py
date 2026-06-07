try:
    def f(a,b):
        c=58
        if a:
            c=1
        elif a==4:
             return 0
        else: 
            c=4
        return c
    
    print(f(0,1))
    
except: print('error')
