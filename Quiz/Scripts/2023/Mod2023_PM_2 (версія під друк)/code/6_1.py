try:
    a,b,c=6,7,8
    def f(a,b,c=8):
        print(a,b,c,end=" ")
    
    f(b=3,c=5,2)
    print(a,b,c)
    
except: print('error')
