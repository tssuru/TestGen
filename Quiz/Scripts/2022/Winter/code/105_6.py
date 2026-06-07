try:
    a,b,c=7,5,3
    def f(b):
        a=1
        b=2
        c=5
        return a+b+c
    
    a,b,c=9,4,9
    print(f(b),a,b,c)
    
except: print('error')
