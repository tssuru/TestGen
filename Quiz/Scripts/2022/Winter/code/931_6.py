try:
    a,b,c=9,3,6
    def h(b):
        a=2
        b+=5
        c=4
        return a+b+c
    
    a,b,c=4,5,8
    print(h(b),a,b,c)
    
except: print('error')
