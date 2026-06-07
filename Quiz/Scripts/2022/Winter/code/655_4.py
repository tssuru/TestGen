try:
    def f(a,b):
        c=88
        if a==4:
            c=7
        elif a!=0:
             c=9
        else: 
            return 1
        return c
    
    print(f(6,-5))
    
except: print('error')
