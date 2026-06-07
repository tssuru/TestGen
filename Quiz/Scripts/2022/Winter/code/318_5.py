try:
    
    a,b,c=7,9,8
    def f(a,b,c=9):
        print(a,b,c,end="")
    
    f(3,c=2,b=5)
    print(a,b,c)
    
except: print('error')
