try:
    a,b,c=8,5,1
    def f(b):
        a=5
        b+=3
        c=2
        return a+b+c
    
    a,b,c=6,0,4
    print(f(b),a,b,c)
    
except: print('error')
