try:
    def f(a,b):
        c=59
        if b<=-1:
            c=5
        if a<3:
             return 7
        else: 
            c=2
        return c
    
    print(f(-8,6))
    
except: print('error')
