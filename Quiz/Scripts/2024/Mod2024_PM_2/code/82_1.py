try:
    a,b,c=4,6,2
    def f(b):
        a=1
        b-=2
        c=3
        return a+b+c
    
    a,b,c=3,5,7
    print(f(b),a,b,c)
    
except: print('error')
