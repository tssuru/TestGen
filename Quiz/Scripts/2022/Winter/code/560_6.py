try:
    a,b,c=5,4,7
    def f(a):
        a=2
        b*=4
        c=1
        return a+b+c
    
    a,b,c=3,9,1
    print(f(b),a,b,c)
    
except: print('error')
