try:
    a,b,c=9,6,1
    def h(a):
        a=4
        b=2
        c=5
        return a+b+c
    
    a,b,c=4,5,8
    print(h(b),a,b,c)
except: print('error')
