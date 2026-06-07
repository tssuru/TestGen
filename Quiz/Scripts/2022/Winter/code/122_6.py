try:
    a,b,c=2,9,0
    def f(b):
        a-=5
        b=4
        c=4
        return a+b+c
    
    a,b,c=5,0,1
    print(f(b),a,b,c)
    
except: print('error')
