try:
    def f(a,b):
        c=80
        if a<=3:
            return 9
        if a<4:
             return 8
        else: 
            c=5
        return c
    
    print(f(-1,-6))
    
except: print('error')
