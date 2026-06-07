try:
    a,b,c=9,4,5
    def f(a):
        a=1
        b-=4
        c=3
        return a+b+c
    
    a,b,c=2,3,6
    print(f(b),a,b,c)
    
except: print('error')
