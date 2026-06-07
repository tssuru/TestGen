try:
    a,b,c=9,4,8
    def f(a):
        global c
        a=5
        b+=1
        c=2
        return a+b+c
    
    a,b,c=7,6,9
    print(f(b),a,b,c)
    
except: print('error')
