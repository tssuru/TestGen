try:
    a,b,c=2,6,8
    def f(a):
        a=1
        b+=5
        c=3
        return a+b+c
    
    a,b,c=4,1,5
    print(f(b),a,b,c)
    
except: print('error')
