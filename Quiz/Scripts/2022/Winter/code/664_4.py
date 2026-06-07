try:
    def f(a,b):
        c=96
        if b<5:
            c=4
        elif a<=0:
             return 8
        else: 
            c=4
        return c
    
    print(f(-1,3))
    
except: print('error')
