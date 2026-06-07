try:
    a,b,c=9,9,8
    def f(a,b=6,c=7):
        print(a,b,c,end=" ")
    
    f(0,c=2,b=4)
    print(a,b,c)
    
except: print('error')
