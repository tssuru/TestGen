try:
    a,b,c=4,9,3
    def f(a):
        a=1
        b-=5
        c=3
        return a+b+c
    
    a,b,c=7,6,8
    print(f(b),a,b,c)
    
except: print('error')
