try:
    a,b,c=3,5,6
    def f(a):
        a=4
        b*=5
        c=1
        return a+b+c
    
    a,b,c=8,9,0
    print(f(b),a,b,c)
    
except: print('error')
