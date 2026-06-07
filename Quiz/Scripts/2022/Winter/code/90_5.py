try:
    
    a,b,c=7,7,6
    def f(a,b,c=9):
        print(a,b,c,end="")
    
    f(1,3,a=5)
    print(a,b,c)
    
except: print('error')
