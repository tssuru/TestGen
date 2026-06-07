try:
    def f(a,b):
        c=88
        if b:
            c=3
        elif a==-4:
             return 9
        else: 
            c=7
        return c
    
    print(f(1,4))
    
except: print('error')
