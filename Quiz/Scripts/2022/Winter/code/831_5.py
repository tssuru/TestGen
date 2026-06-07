try:
    
    a,b,c=7,6,8
    def f(a,b,c=9):
        print(a,b,c,end="")
    
    f(a=1,4,c=2)
    print(a,b,c)
    
except: print('error')
