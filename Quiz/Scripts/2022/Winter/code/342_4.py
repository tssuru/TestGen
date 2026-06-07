try:
    def f(a,b):
        c=67
        if b==1:
            c=4
        elif a<3:
             return 9
        else: 
            c=7
        return c
    
    print(f(-7,6))
    
except: print('error')
