try:
    a,b,c=9,1,8
    def h(b):
        a+=1
        b=3
        c=5
        return a+b+c
    
    a,b,c=7,5,3
    print(h(b),a,b,c)
    
except: print('error')
