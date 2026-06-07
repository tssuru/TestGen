try:
    a,b,c=7,2,3
    def h(a):
        global c
        a+=1
        b=5
        c=4
        return a+b+c
    
    a,b,c=4,5,8
    print(h(b),a,b,c)
    
except: print('error')
