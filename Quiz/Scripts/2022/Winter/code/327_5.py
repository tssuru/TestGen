try:
    
    a,b,c=9,7,8
    def f(a,b,c=9):
        print(a,b,c,end="")
    
    f(a=1,4,b=5)
    print(a,b,c)
    
except: print('error')
