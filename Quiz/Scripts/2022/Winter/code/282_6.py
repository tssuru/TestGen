try:
    a,b,c=9,3,4
    def h(a):
        a=1
        b*=3
        c=4
        return a+b+c
    
    a,b,c=5,2,8
    print(h(b),a,b,c)
    
except: print('error')
