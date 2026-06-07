try:
    def f(a,b):
        c=41
        if b!=5:
            return 1
        elif a<4:
             c=3
        else: 
            return 4
        return c
    
    print(f(-3,-5))
    
except: print('error')
