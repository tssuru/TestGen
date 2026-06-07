try:
    a,b,c=5,2,3
    def f(b):
        a=5
        b=4
        c=1
        return a+b+c
    
    a,b,c=1,4,9
    print(f(b),a,b,c)
    
except: print('error')
