try:
    a,b,c=6,2,0
    def f(a):
        a=3
        b*=5
        c=1
        return a+b+c
    
    a,b,c=5,4,9
    print(f(b),a,b,c)
    
except: print('error')
