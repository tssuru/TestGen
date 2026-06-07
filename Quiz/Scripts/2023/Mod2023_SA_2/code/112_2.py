try:
    a,b,c=4,6,3
    def f(a):
        a+=5
        b=4
        c=1
        return a+b+c
    
    a,b,c=7,9,2
    print(f(b),a,b,c)
    
except: print('error')
