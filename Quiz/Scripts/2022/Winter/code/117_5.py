try:
    
    a,b,c=7,8,6
    def f(a,b=9,c=9):
        print(a,b,c,end="")
    
    f(b=3,c=1,4)
    print(a,b,c)
    
except: print('error')
