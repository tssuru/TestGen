try:
    a,b,c=9,6,0
    def h(a):
        a=2
        b*=1
        c=4
        return a+b+c
    
    a,b,c=1,5,8
    print(h(b),a,b,c)
except: print('error')
