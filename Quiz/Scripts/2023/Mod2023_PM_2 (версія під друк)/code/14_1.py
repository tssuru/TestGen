try:
    a,b,c=9,7,8
    def f(a,b=6,c=9):
        print(a,b,c,end=" ")
    
    f(3,1)
    print(a,b,c)
    
except: print('error')
