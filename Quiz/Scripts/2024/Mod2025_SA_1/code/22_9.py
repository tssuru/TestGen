try:
    a,b,c=8,6,3
    def f(b):
        a=1
        b*=2
        c=5
        return a+b+c
    
    a,b,c=1,9,6
    print(f(b),a,b,c)
except: print('error')
