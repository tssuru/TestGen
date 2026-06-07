try:
    def f(a,b):
        c=10
        if a<=5:
            c=7
        elif a<=0:
             return 1
        else: 
            return 4
        return c
    
    print(f(-6,-5))
    
except: print('error')
