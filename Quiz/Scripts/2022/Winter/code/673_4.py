try:
    def f(a,b):
        c=23
        if a!=4:
            c=5
        if b<3:
             return 8
        else: 
            c=0
        return c
    
    print(f(-9,6))
    
except: print('error')
