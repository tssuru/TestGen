try:
    a,b,c=7,8,9
    def f(a,b=6,c=9):
        print(a,b,c,end=" ")
    
    f(c=3,a=2,b=5)
    print(a,b,c)
    
except: print('error')
