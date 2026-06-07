try:
    def f(a,b):
        c=65
        if b!=-2:
            c=0
        elif a<3:
             return 1
        else: 
            c=8
        return c
    
    print(f(1,9))
    
except: print('error')
