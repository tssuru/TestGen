try:
    a,b,c=6,0,1
    def f(a):
        a+=2
        b=2
        c=5
        return a+b+c
    
    a,b,c=0,9,8
    print(f(b),a,b,c)
except: print('error')
