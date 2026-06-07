try:
    a,b,c=7,8,6
    def f(a,b,c=9):
        print(a,b,c,end=" ")
    
    f(a=5,c=3,b=1)
    print(a,b,c)
    
except: print('error')
