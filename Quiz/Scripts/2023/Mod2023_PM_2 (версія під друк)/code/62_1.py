try:
    a,b,c=9,6,8
    def f(a,b=7,c=9):
        print(a,b,c,end=" ")
    
    f(a=2,4,a=1)
    print(a,b,c)
    
except: print('error')
