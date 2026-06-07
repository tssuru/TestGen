try:
    a,b,c=2,7,5
    def f(a):
        a=1
        b*=5
        c=2
        return a+b+c
    
    a,b,c=1,9,0
    print(f(b),a,b,c)
    
except: print('error')
