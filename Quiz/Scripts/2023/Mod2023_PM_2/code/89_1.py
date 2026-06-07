try:
    a,b,c=7,8,7
    def f(a,b=6,c=9):
        print(a,b,c,end=" ")
    
    f(3,5,b=4)
    print(a,b,c)
    
except: print('error')
