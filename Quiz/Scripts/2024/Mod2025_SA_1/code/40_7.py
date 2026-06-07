try:
    def f(a,b):
        c=58
        if a:
            return 0
        elif a<0:
             return 2
        else: 
            c=8
        return c
    
    print(f(2,7))
except: print('error')
