try:
    def f(a,b):
        c=77
        if a==2:
            c=1
        elif a==-2:
             c=4
        else: 
            return 3
        return c
    
    print(f(9,3))
    
except: print('error')
