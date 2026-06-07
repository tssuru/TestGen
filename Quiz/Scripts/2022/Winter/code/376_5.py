try:
    
    a,b,c=7,6,8
    def f(a,b,c=9):
        print(a,b,c,end="")
    
    f(4,c=1,b=4)
    print(a,b,c)
    
except: print('error')
